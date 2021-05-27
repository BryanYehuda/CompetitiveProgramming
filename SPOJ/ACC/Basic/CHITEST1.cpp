#include <iostream>
using namespace std;

int main ()
{
	int cases;
	float x,y,sum;
	cin >> cases;
	while (cases--)
	{
		cin >> x >> y;
		sum = x+y;
		cout << sum << endl;
	}
	return 0;
}
