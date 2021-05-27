#include <iostream>
#include <algorithm>
#define MOD 1000000007
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

int main()
{
	LL n,a,b,c,d;
	cin >> n;
	a = modexp(3LL,n-1LL,MOD) - 1LL;
	b = ((a*3)/2)%MOD;
	d = (2+b)%MOD;
	if(d<=0) d+=MOD;
	cout << d << endl;
}
