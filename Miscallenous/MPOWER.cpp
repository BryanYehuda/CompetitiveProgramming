#include <iostream>
#include <cmath>
using namespace std;

unsigned long long x,y,n,tc,ans,b;

int main()
{
	cin >> tc;
	while (tc--)
	{
		cin >> x >> y >> n;
		b = x%n;
		ans = pow(b,y);
		cout << ans << endl;
	}
	return 0;
}
