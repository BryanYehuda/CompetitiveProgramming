#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int tc,n,m,ans,MOD=10000;

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

void scanint(int &res)
{
	int c = getchar();
	res = 0;
	for(;(c<48 || c>57); c = getchar());  // kalau di compile di dev C++ _unlocked nya dihapus, tulis getchar()
	for(;c>47 && c<58;c = getchar())      // kalau sudah di submit di online judge baru di tulis getchar_unlocked()
	       res = (res<<1) + (res<<3) + c - 48;
}

int f(int n)
{
    if((n==1)||(n==0))
    {
        return(n);
    }
    else
    {
        return(f(n-1)+f(n-2));
    }
    
}
int main()
{
	scanint(tc);
	while (tc--)
	{
		ans=0;
		scanint(n);
		scanint(m);
		if (m>n) ans=0;
		else if (m==0&&n==0) ans = 1;
		else if (m==0&&n==1) ans = 0;
		else if (m==0) ans = modexp(f(n-2),MOD-2,MOD);
		else ans = modexp(f(n-m),MOD-2,MOD);
		cout << ans + 1<< endl;
	}
	return 0;
}
