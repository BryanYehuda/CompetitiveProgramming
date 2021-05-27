#include <cstdio>
#include <algorithm>
typedef long long ULL;
using namespace std;

ULL MOD = 1000000007;

ULL modexp(ULL base, ULL exponent, ULL modulus)
{
    ULL result = 1;
    while (exponent > 0)
        {
            if (exponent % 2 == 1)
                result = (result * base) % modulus;
            exponent = exponent >> 1;
            base = (base * base) % modulus;
        }
        return result;
}

int main()
{
	ULL n, a, b, hasil, tmp;
	int T;
	scanf("%d",&T);
	while (T--)
	{
		scanf("%lld",&n);
		if (n<=4) hasil = n;
		else 
		{
			a = n/3 ; b = n%3;
			if (b==0) hasil=modexp(3LL, a , MOD);
			else if (b==1) hasil=(4LL*modexp(3LL, a - 1LL, MOD))%MOD;
			else hasil=(2LL*modexp(3LL, a, MOD))&MOD;
	    }
	    printf ("%lld\n", hasil);
	}
	return 0;
}
