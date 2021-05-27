#include <iostream>
using namespace std;

int t,n,m,k,men[40000],women[40000];

int main()
{
	cin >> t;
	for (int i = 1; i<=t; i++)
	{
		cin >> n >> m >> k;
		for (int a=0 ; a<=n ; a++ )
		{
		cin >> men[a];
	    }
	    for (int b=0 ; b<=m ; b++)
	    cin >> women[b];
	}
return 0;	
}
