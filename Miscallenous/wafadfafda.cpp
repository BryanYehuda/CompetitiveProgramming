#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	unsigned long long n, a, b;
	float ans = 0, enu;
	cin >> n;
    ans = sqrt(n)-1;
	a = floor(ans)*(floor(ans)+2);
	b = ceil(ans)*(ceil(ans)+2);
	cout << a << " " << b;
return 0;
}
