#include <iostream>
using namespace std;

int main()
{
	int tc,a,ans;
	cin >> tc;
	for (int i=1;i<=tc;i++)
	{
		cin >> a;
		ans=0;
		if (a<=3)
		{
			ans=0;
		}
		else if (a%2==0 && a>3)
		{
			a = a-3;
			ans = a*a;
		}
		else ans = ((a-4)*(a-4)) + (a-4) ;
		cout << "Kasus #" << i << ": " << ans << endl;
	}
	return 0;
}
