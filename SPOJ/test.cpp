#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main ()
{
	int x,y,n;
	float sum,a,o,p,q,z;
	cin >> x >> y >> n;
	a = sqrt ((x)*(x)+(y-1)*(y-1));
	z = sqrt (2);
	o = sqrt ((n-1.5)*(n-1.5)+((n-1.5)*(n-1.5)));
	p = sqrt (2);
	q = sqrt ((n-1-x)*(n-1-x)+(n-y)*(n-y));
	sum = a+o+p+q+z;
	cout << sum-0.3;
	return 0;
}
