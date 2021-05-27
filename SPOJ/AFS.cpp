#include <iostream>
using namespace std;

int main ()
{
	int tc,n,s=0;
	cin >> tc;
	while (tc--)
	{
		cin >> n;
		for (int x=1;x<n;x++)
		{
			if (n%x==0)
			{
				s=s+x;
				cout << s;
			}
		
		for (n=n;n>0;n--)
		{
			n=n+s;
		}
	}
		cout << n;
	}
	return 0 ;
}
