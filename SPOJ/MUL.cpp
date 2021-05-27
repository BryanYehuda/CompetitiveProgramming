#include <iostream>
#include <algorithm>
using namespace std;

int tc,a,b;

void scanint(int &res)
{
	int c = getchar();
	res = 0;
	for(;(c<48 || c>57); c = getchar());  // kalau di compile di dev C++ _unlocked nya dihapus, tulis getchar()
	for(;c>47 && c<58;c = getchar())      // kalau sudah di submit di online judge baru di tulis getchar_unlocked()
	       res = (res<<1) + (res<<3) + c - 48;
}

int main()
{
	scanint(tc);
	while (tc--)
	{
		scanint(a);
		scanint(b);
		b=b*a;
		cout << b << endl;
	}
	return 0;
}

