#include <iostream>
using namespace std;

int main()
{
	int tc,i;
	long long int a,b,sum1,sum2;
	long long int dig1,dig2,c;
	cin >> tc;
	for (i=1 ; i<=tc ; i++)
	{
		c=0;
		sum1=0;
		sum2=0;
		cin >> a >> b;
		while (a>0)
		{
			dig1 = a%10;
			sum1 = sum1+dig1;
			a = a/10;
		}
		while (b>0)
		{
			dig2 = b%10;
			sum2 = sum2+dig2;
			b = b/10;
		}
		c = sum1 * sum2;
		cout << "Case #" << i << ": " << c << endl;
	}
	return 0;
}
