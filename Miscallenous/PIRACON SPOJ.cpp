#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

long long ans, tringus, piramid,n;
int tc;

int main()
{
	cin >> tc;
	for (int i=1;i<=tc;i++)
	{
		ans = 0;
		cin >> n;
		tringus = 2*n*n - 2*n;
		piramid = 4*n*n - 7*n + 4 + ((n*n*n-6*n*n+11*n-6)*2)/3;
		ans = tringus + piramid;
		cout << "Pyramid E. Nro# " << i << ": " << ans << endl;
		cout << "Tringus: " << tringus << endl;
	}
	return 0;
}
