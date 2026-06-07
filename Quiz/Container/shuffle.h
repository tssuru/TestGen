#pragma once
#include "BaseContainer.h"
#include <random>
#include <cstdint>

/* контейнер элементов от 0 до n-1
содержит случайную перестановку
при переходе от последнего элемента к первому производится перемешивание
*/
class Shuffle:public BaseContainer<unsigned> {
protected:
#ifdef MinGW
    static std::mt19937 e;
#else
    std::mt19937 e;
#endif
    static bool forced_seed_enabled;
    static std::uint32_t forced_seed;
	void settle();//fill with 0,1,2,...
	bool do_mix=true;
public:
    using type=unsigned;
    static void set_global_seed(unsigned seed);
	Shuffle(int n=0, bool do_mix=true);
	void init(int n);
    void mix();
	const unsigned& operator++(int);
};
