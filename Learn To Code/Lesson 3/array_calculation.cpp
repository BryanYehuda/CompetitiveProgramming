#include <iostream>
using namespace std;

int main()
{
	
	int a[]={134,1356,1245,124,1245};
	int sum = 0;
	
	for (int x=0; x<5 ; x++)
	{	
		sum += a[x];
	}
	
		cout << sum << endl;
	return 0;
}


