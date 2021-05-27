#include <iostream>
using namespace std;

int main ()
{
	int cases,n,x,y;
	cin >> cases;
	while (cases--)
	{
		cin >> n >> x >> y;
		for (int i=2;i<n;i++)
		{
			if (i%x==0)
			{
				if (i%y!=0)
				cout << i << " ";
			}
		}
	}
	return 0;
}
