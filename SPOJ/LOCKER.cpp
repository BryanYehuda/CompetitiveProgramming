#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long LL;

void scanint(int &res)
{
	int c = getchar();
	res = 0;
	for(;(c<48 || c>57); c = getchar());  // kalau di compile di dev C++ _unlocked nya dihapus, tulis getchar()
	for(;c>47 && c<58;c = getchar())      // kalau sudah di submit di online judge baru di tulis getchar_unlocked()
	       res = (res<<1) + (res<<3) + c - 48;
}

LL modexp(LL base, LL exponent, LL modulus)

{
    LL result = 1;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            result = (result * base) % modulus;
        exponent = exponent >> 1;
        base = (base * base) % modulus;
    }
    return result;
}

int main ()
{
	int cases;
	int a,b;
	scanint(cases);
	while (cases--)
	{
		scanint(b);
		LL ans = 1, MOD = 1000000007;
			a = b;
			a = a/3;
			ans = ans * pow(3,a);
		b = b - (3*a);
		if (b==2) ans = ans * 2;
		if (b==3) ans = ans * 3;
		if (b==4) ans = ans * 4;;
		printf ("%lld\n", ans);
	}
	return 0;
}
