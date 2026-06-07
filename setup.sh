#!/usr/bin/env bash
# setup.sh — install Docker (if needed), build and run the testgen container on Ubuntu.
# Usage:  ./setup.sh            (build + run)
#         ./setup.sh --rebuild  (force --no-cache build)
#         ./setup.sh --stop     (stop + remove container)

set -euo pipefail

REPO_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
IMAGE=quiz-testgen:latest
CONTAINER=quiz-testgen
PORT=3010

log()  { printf '\033[1;34m[setup]\033[0m %s\n' "$*"; }
warn() { printf '\033[1;33m[warn]\033[0m %s\n' "$*" >&2; }
die()  { printf '\033[1;31m[error]\033[0m %s\n' "$*" >&2; exit 1; }

need_sudo() {
  if [[ $EUID -eq 0 ]]; then SUDO=""; else
    command -v sudo >/dev/null || die "sudo required but not installed"
    SUDO="sudo"
  fi
}

install_docker() {
  if command -v docker >/dev/null 2>&1; then
    log "docker already installed: $(docker --version)"
    return
  fi
  log "installing docker engine via official repository"
  need_sudo
  $SUDO apt-get update -qq
  $SUDO apt-get install -y -qq ca-certificates curl gnupg
  $SUDO install -m 0755 -d /etc/apt/keyrings
  curl -fsSL https://download.docker.com/linux/ubuntu/gpg | $SUDO gpg --dearmor -o /etc/apt/keyrings/docker.gpg
  $SUDO chmod a+r /etc/apt/keyrings/docker.gpg
  . /etc/os-release
  echo "deb [arch=$(dpkg --print-architecture) signed-by=/etc/apt/keyrings/docker.gpg] \
    https://download.docker.com/linux/ubuntu $VERSION_CODENAME stable" \
    | $SUDO tee /etc/apt/sources.list.d/docker.list >/dev/null
  $SUDO apt-get update -qq
  $SUDO apt-get install -y -qq docker-ce docker-ce-cli containerd.io docker-buildx-plugin docker-compose-plugin
  $SUDO systemctl enable --now docker
  if ! groups "$USER" | grep -qw docker; then
    $SUDO usermod -aG docker "$USER"
    warn "added $USER to docker group — re-login required before running docker without sudo"
  fi
}

ensure_daemon() {
  if ! docker info >/dev/null 2>&1; then
    need_sudo
    $SUDO systemctl start docker || die "docker daemon is not running and could not be started"
  fi
}

stop_container() {
  if docker ps -a --format '{{.Names}}' | grep -qx "$CONTAINER"; then
    log "stopping existing container: $CONTAINER"
    docker rm -f "$CONTAINER" >/dev/null
  fi
}

build_image() {
  local args=()
  [[ "${1:-}" == "--rebuild" ]] && args+=("--no-cache")
  log "building image $IMAGE ${args[*]:-}"
  DOCKER_BUILDKIT=1 docker build "${args[@]}" -f "$REPO_DIR/docker/Dockerfile" -t "$IMAGE" "$REPO_DIR"
}

run_container() {
  log "starting container $CONTAINER on :$PORT"
  docker run -d --name "$CONTAINER" --restart unless-stopped -p "$PORT:$PORT" "$IMAGE" >/dev/null
  for i in $(seq 1 30); do
    if curl -fsS "http://localhost:$PORT/health" >/dev/null 2>&1; then
      log "ready after ${i}s → http://localhost:$PORT"
      curl -s "http://localhost:$PORT/api/pool"
      echo
      return
    fi
    sleep 1
  done
  die "server did not become healthy within 30s — check: docker logs $CONTAINER"
}

case "${1:-}" in
  --stop)
    stop_container
    log "stopped"
    ;;
  --rebuild)
    install_docker
    ensure_daemon
    stop_container
    build_image --rebuild
    run_container
    ;;
  ""|--run)
    install_docker
    ensure_daemon
    stop_container
    build_image
    run_container
    ;;
  -h|--help)
    sed -n '2,6p' "$0"
    ;;
  *)
    die "unknown argument: $1 (try --help)"
    ;;
esac
