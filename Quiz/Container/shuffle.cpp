#include "shuffle.h"
#include <algorithm>
#include <ctime>

bool Shuffle::forced_seed_enabled = false;
std::uint32_t Shuffle::forced_seed = 0u;
#ifdef MinGW
    std::seed_seq seeds{time(0)};
    std::mt19937 Shuffle::e(seeds);
#endif

void Shuffle::set_global_seed(unsigned seed){
    forced_seed = static_cast<std::uint32_t>(seed);
    forced_seed_enabled = true;
#ifdef MinGW
    e.seed(forced_seed);
#endif
}

Shuffle::Shuffle(int n_, bool do_mix):do_mix(do_mix){
#ifndef MinGW
    if (forced_seed_enabled){
        e.seed(forced_seed);
    } else {
        std::random_device r;
        std::seed_seq seeds{r(),r(),r(),r(),r(),r()};
        e.seed(seeds);
    }
#else
    if (forced_seed_enabled){
        e.seed(forced_seed);
    }
#endif
    init(n_);}

void Shuffle::init(int n_){
	clear(); vectorT::resize(n_); last=0;
	settle();
}
void Shuffle::settle(){ for (unsigned i=0; i<size();++i) operator[](i)=i;}
void Shuffle::mix(){
    shuffle(vectorT::begin(),vectorT::end(),e);
}

const unsigned& Shuffle::operator++(int){
    //if (a.empty()) throw out_of_range("no current element in shuffle");
    if (last==0 && do_mix) mix();
    return BaseContainer<unsigned>::operator ++(1);
}
