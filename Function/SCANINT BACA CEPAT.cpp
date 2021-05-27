#include <iostream>
#include <algorithm>
using namespace std;

void scanint(int &res)
{
	int c = getchar_unlocked();
	res = 0;
	for(;(c<48 || c>57); c = getchar_unlocked());  // kalau di compile di dev C++ _unlocked nya dihapus, tulis getchar()
	for(;c>47 && c<58;c = getchar_unlocked())      // kalau sudah di submit di online judge baru di tulis getchar_unlocked()
	       res = (res<<1) + (res<<3) + c - 48;
}


