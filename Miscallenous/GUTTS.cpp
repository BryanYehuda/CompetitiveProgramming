#include <iostream>
typedef unsigned long long ULL;
using namespace std;

ULL tc,n,ans;

int main()
{
	cin >> tc;
	while(tc--)
	{
		ans = 0ll; // untuk membuat semua isi128 bit dari ans dengan 0 semuanya
		cin >> n;
		while (n>1)
		{
			ans <<=1;
			ans |= n&1;
			n >>=1;
		}
		cout << ans << endl;
	}
	return 0;
}
