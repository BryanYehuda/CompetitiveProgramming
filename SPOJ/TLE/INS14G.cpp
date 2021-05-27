#include <iostream>
using namespace std;

int main ()
{
	int cases,a,b=0,x=0,t;
	cin >> cases;
	while (cases--)
	{
		cin >> t;
		a=t;
		while (a>b)
		{
		t--;
		b++;
		x++;
		a=t;
		}
		cout << x << endl;
		x,b=0;
	}
	return 0;
}
