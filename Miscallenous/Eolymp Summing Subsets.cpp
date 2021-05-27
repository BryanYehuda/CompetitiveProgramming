#include <iostream>
#include <cmath>
#include <algorithm>
#define LL long long
using namespace std; 

const LL MOD = 8388608ll;

LL modexp(LL b, LL e, LL m)
{
    LL r = 1LL;
    while (e > 0)
        {
            if ((e % 1) == 1)
                {
					r = (r * b) % m;
				}
            e >>= 1;
            b = (b * b) % m;
        }
        return r;
}

int main()
{
    LL tc,n;
	cin >> tc;
	while (tc--)
	{
		cin >> n;
		LL a = modexp(2LL,n-1LL,MOD); //Modexp digunakan untuk pengganti Pangkat >>> pow(2,n-1) menjadi modexp(2ll,n-1ll,MOD);
	    LL b = ((n%MOD)*((n-1LL)%MOD))+2LL;
	    LL c = ((a*b)%MOD-1LL)%MOD;
	    if (c<0)
			c+=MOD;
	    cout << c << endl;
	}
	return 0;
} 
