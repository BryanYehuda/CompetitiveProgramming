#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define PI acos(-1.0)

int main ()
{
	int t;
	double L;
	
	cin >> t;
	while (t--)
	{
		cin >> L;
		cout << floor(sqrt(L/(PI/3.0 + (2.0*sqrt(3.0)) - 4.0 ))) << endl;
	}
}
