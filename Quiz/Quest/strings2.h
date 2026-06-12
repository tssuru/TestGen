#pragma once
#include <string>
#include <map>
#include <vector>
#include <climits>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <stdexcept>

inline std::string trim(const std::string &s) {
    auto start = s.find_first_not_of(" \t\r\n");
    if (start == std::string::npos) return "";
    auto end = s.find_last_not_of(" \t\r\n");
    return s.substr(start, end - start + 1);
}

inline std::string substitute(const std::string &text, const std::string &from, const std::string &to) {
    std::string result = text;
    std::string::size_type pos = 0;
    while ((pos = result.find(from, pos)) != std::string::npos) {
        result.replace(pos, from.size(), to);
        pos += to.size();
    }
    return result;
}

inline std::string substituteOne(const std::string &text, const std::string &from, const std::string &to) {
    auto pos = text.find(from);
    if (pos == std::string::npos) return text;
    std::string result = text;
    result.replace(pos, from.size(), to);
    return result;
}

inline std::string substituteT(const std::string &text, const std::map<std::string, std::string> &table) {
    std::string result = text;
    for (auto &kv : table) {
        std::string key = "{" + kv.first + "}";
        result = substitute(result, key, kv.second);
    }
    return result;
}

inline unsigned convert_u(const std::string &s) {
    auto trimmed = trim(s);
    if (trimmed.empty()) throw std::logic_error("Empty string in convert_u");
    char *end;
    unsigned long val = std::strtoul(trimmed.c_str(), &end, 10);
    if (*end != '\0') throw std::logic_error("Cannot convert to unsigned: " + trimmed);
    if (val > UINT_MAX) throw std::logic_error("Value out of range: " + trimmed);
    return static_cast<unsigned>(val);
}

inline std::string d2string(double val, int precision) {
    std::ostringstream os;
    os << std::fixed << std::setprecision(precision) << val;
    return os.str();
}

inline std::string expand_dir(const std::string &dir) {
    if (dir.empty()) return dir;
    std::string result = trim(dir);
    if (result.empty()) return result;
    char last = result[result.size() - 1];
    if (last != '/' && last != '\\') result += '/';
    return result;
}

inline std::vector<std::string> load(const std::string &s, const std::string &delim) {
    std::vector<std::string> result;
    std::string::size_type start = 0;
    std::string::size_type pos;
    while ((pos = s.find(delim, start)) != std::string::npos) {
        auto item = trim(s.substr(start, pos - start));
        if (!item.empty()) result.push_back(item);
        start = pos + delim.size();
    }
    auto last_item = trim(s.substr(start));
    if (!last_item.empty()) result.push_back(last_item);
    return result;
}
