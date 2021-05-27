#include <iostream>
#include <cstring>
using namespace std;

int a[1000], n, temp;

int main()
{
	cout << "Masukkan berapa banyak angka yang ingin anda urutkan" << endl;
	cin >> n;
	cout << "Masukkan angka-angka yang ingin anda urutkan" << endl;
	for (int x = 0;x<n;x++)
	{
		cin >> a[x];
	}
	cout << "Proses sedang berjalan" << endl;
	for (int i=1;i<=n-1;i++)
	{
		for (int k=n;k>=i+1;k--)
	    {
	    	if(a[k]<a[k-1])
	    	{
	    		temp = a[k];
	    		a[k] = a[k-1];
	    		a[k-1] = temp;
	    		cout << a[k-1];
			}
		}
	}
	return 0;
}

