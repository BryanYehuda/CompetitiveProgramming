#include <iostream>
using namespace std;

unsigned long int tc,n,ans;

int main()
{
	cin >> tc;
	while (tc--)
	{
		ans = 0;
		cin >> n;
		if (n % 2 ==0)
		{
			ans = n *(n + 2) * (2*n+1) / 8;
		}
		else ans = (n*(n+2)*(2*n+1 ) -1 ) / 8;
		cout << ans << endl;
	}
	return 0;
}
