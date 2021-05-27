#include <iostream>
using namespace std;

int main()
{
	int tc,a,b,c,tukar,air;
	cin >> tc;
	for (int i=1;i<=tc;i++)
	{
		cin >> a >> b >> air;
		if (b<a)
		{
			tukar=a;
			a=b;
			b=tukar;
		}
		c=b-a;
		air = air%b;
		if (air%a==0)
		{
			cout << "Kasus #" << i << ": YA" << endl;
		}
		else if (air%c==0)
		{
			cout << "Kasus #" << i << ": YA" << endl;
		}
		else cout << "Kasus #" << i << ": TIDAK" << endl;
	}
	return 0;
}
