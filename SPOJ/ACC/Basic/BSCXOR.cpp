#include <iostream>
using namespace std;

int main ()
{
	int x,y,sum;
	cin >> x >> y;
	sum = x+y;
	if (sum>1||sum<1)
	{
		cout << 0;
	}
	else cout << 1;
	return 0;
}
