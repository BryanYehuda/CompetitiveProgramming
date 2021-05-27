#include <cstdio>
#include <algorithm>
using namespace std;
typedef long long LL;

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

LL n,ans,MOD=1000000007;

int main()
{
	int tc;
	scanf("%d",&tc);
	int no=0;
	while (tc--)
	{
		scanf("%lld",&n);
		ans=modexp(5,n-1,MOD);
		ans=(ans*4)%MOD;
		printf("Case #%d: %lld\n",++no,ans);
	}
}
