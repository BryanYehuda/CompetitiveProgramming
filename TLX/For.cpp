#include<iostream>
using namespace std;

int main()
{
	int tc;
	int a;
	int ans = 0;
	cin >> tc;
	for (int i = 1 ; i <= tc ; i ++)
	{
		cin >> a;
		ans = ans + a;
	}
	cout << ans << endl;
}
