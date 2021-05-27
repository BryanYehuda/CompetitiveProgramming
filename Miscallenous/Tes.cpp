#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	signed int x=2018;
	int i = 0 ;
	while (x>=0)
	{
		if (x%2==1)
		{
			x = 3*x + 2;
		}
		else x = x / 2;
		i += 1;
	
	}
	cout << i;
}
