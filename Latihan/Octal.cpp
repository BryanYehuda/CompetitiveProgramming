#include <iostream>
using namespace std;

int main ()
{
	int cases,total,arr[64],x=0;
	unsigned int sum;
	cin >> cases;
	while (cases--)
	{
		cin >> sum;
		while (sum>0)
		{
			total = sum%8;
			sum /= 8;
			arr[x]=total;
			cout << arr[x];
			x++;
		}
		cout << "\n" ;
	
	}
	return 0 ;
}

