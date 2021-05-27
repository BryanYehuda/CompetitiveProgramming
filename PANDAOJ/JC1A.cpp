#include <iostream>
using namespace std;

int main()
{
	int tc,n,x,ans;
	cin >> tc;
	for (int i=1;i<=tc;i++)
	{
		cin >> n >> x;
		if (n%x==0)
		{
			ans = n/x;
		}
		else ans = (n/x) + 1;
		cout << "Kasus #" << i << ": " << ans << endl; 
	}
	return 0;
}
