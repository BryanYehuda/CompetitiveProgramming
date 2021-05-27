#include <cstdio>
using namespace std;
typedef long long ll;
ll tc,n,ans,MOD=1000000007;

ll modexp(ll b,ll e,ll m)
{
	ll r=1;
	while (e>0)
	{
		if((e&1)==1)
		{
			r=(r*b) %m;
		}
		e>>=1;
		b=(b*b) %m;
	}
	return(ll)r;
}

int main ()
{
	scanf("%lld" , &tc);
	while (tc--)
	{
		scanf("%lld",&n);
		ans=(4+(n-1)*6) %MOD;
		ll tmp = ((((n-1)*(n-2))%MOD)*2)%MOD;
		ans=ans+tmp;
		ll inv6=modexp(6,MOD-2,MOD);
		tmp = ((((n-1)*(n-2)%MOD)*(n-3)%MOD)*inv6%MOD);
		ans=ans+tmp;
		printf("%lld\n",ans%MOD);
	}
	return 0 ;
}
