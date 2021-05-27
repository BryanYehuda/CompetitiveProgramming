#include <iostream>
using namespace std;

int main ()
{
	int cases,n;
	int sum = 0;
	cin >> cases;
	while (cases--)
	{
		cin >> n;
		if (n=1)
		{
			cout << n << endl;
		}
		for (int i=1;i<=n/2;i++)
		{
			if (n%i==0)
			{
				sum += i;
			}
		}
	cout << sum << endl;
	sum = 0;
	}
	return 0;
}
