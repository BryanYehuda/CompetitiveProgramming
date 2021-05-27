#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	int tc,s,l;
	cin >> tc;
	while (tc--)
	{
		cin >> l;
		l=(l-1)*2;
		s = floor (sqrt(l));
		cout << s << endl;
	}
return 0;
}
