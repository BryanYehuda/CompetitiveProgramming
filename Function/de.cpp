#include <cstdio>
#include <algorithm>
#define MOD 8388608
using namespace std;
typedef long long LL;

LL modexp (LL b, LL e, LL m) {
	LL r=1LL;
	while (e>0) {
		if ((e&1)==1) {
			r = (r*b)%m;
		}
		e >>= 1;
		b = (b*b) %m;
	}
	return r;
}
int main () {
	LL n,t,a,b,c;
	scanf ("%lld", &t);
	while (t--){
		scanf ("%lld", &n);
		//supaya aman dipisah pisah perkaliannya
		a=modexp(2LL,n-1LL,MOD);
		b=((n%MOD)*((n-1LL)%MOD))+2LL;
		c=((a*b)%MOD-1LL)%MOD;
		if (c<0) c+=MOD;
		printf ("%lld\n", c);
	} 
	return 0;
}
