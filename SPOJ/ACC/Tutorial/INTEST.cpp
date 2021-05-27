#include <iostream>
using namespace std;

int main ()
{
	int n,k,t;
	int sum = 0 ;
	cin >> n >> k;
	for (int i=1;i<=n;i++)
	{
		cin >> t;
		if (t%k==0)
		{
			sum += 1;
		}
	}
	cout << sum << endl;
	return 0;
}
