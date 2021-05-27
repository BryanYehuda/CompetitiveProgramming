#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int xa,xb,ya,yb,ans,a,b;
	cin >> xa >> ya >> xb >> yb;
	ans = abs(xa-xb) + abs(ya-yb);
	cout << ans << endl;
	return 0;
}
