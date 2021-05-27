#include <iostream>
using namespace std;

int main ()
{
	int a,b;
	int sum = 0;
	
		cin >> a >> b;
		for (int i=a;i<=b;i++)
		{
			sum = sum+(i*i);
		}
		cout << sum << endl;
	    return 0;
}
