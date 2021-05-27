#include <iostream>
using namespace std;
int m,n,r,flag=0;

int main()
{
	cin >> m >> n;
	while (n>0)
	{
		r = m % n;
		m = n;
		n = r; 
	}
	cout << m << endl;
}
