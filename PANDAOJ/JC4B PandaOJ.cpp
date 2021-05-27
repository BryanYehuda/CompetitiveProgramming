#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
typedef long long unsigned LL;

LL y,n,z;

int main ()
{
	cin >> y;
	for (int i = 1; i<= y ; i++)
	{
		cin >> n;;
		z = fmod(4*fmod(pow(5,n-1),1000000007),1000000007);
		z = z%1000000007;
		cout << "Case #" << i << ": " << z << endl;
	}
	return 0;
}
