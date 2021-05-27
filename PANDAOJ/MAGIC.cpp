#include <iostream>
using namespace std;

unsigned long int t,n,s,mi,ma,ans,f;

int main ()
{
	cin >> t;
	for (int i = 1; i<= t ; i ++)
	{
		cin >> n >> s;
		mi = n*1;
		ma = n*s;
		f = ma-mi+1;
		ans = ((ma+mi)*f)/2;
		cout << "Kasus " << i << ": " << ans << endl;
	}
	return 0;
}
