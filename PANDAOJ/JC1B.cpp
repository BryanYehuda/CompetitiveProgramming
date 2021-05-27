#include <iostream>
using namespace std;

int main()
{
	int tc,ans,a,banyak;
	cin >> tc;
	for (int i=1;i<=tc;i++)
	{
		ans=0;
		cin >> banyak;
		for (int x=1;x<=banyak;x++)
		{
		cin >> a;
		if (a>0)
		{
			ans = ans + a;
		}
	    }
		cout << "Kasus #" << i << ": " << ans << endl;
	}
	return 0;
}
