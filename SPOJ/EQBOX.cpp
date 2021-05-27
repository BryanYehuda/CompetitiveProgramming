#include <iostream>
using namespace std;

int main ()
{
	int cases,a,b,x,y,tile,box;
	cin >> cases;
	while (cases--)
	{
		cin >> a >> b >> x >> y;
		tile = a*b;
		box = x*y;
		if (tile>=box)
		{
			if (a>x|a>y)
			{
				if  (b>x|b>y)
				{
					cout <<"Escape is possible." << endl;
				}
			}
		}
		else cout << "Box cannot be dropped." << endl;
	}
	return 0;
}
