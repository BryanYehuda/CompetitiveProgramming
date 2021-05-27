#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int tc,i,x;
	long long int banyak,uang;
	int harga[10000];
	cin >> tc;
	for (i=1;i<=tc;i++)
	{
		cin >> banyak >> uang;
		for (x=1;x<=banyak;x++)
		{
			cin >> harga[i];
		}
		int n = (sizeof(harga)/sizeof(*harga));
		sort (harga,harga+n);
		for (int j=1;j<=n;j++)
		{
			cout << harga[j];
		}
	}
	return 0;
}
