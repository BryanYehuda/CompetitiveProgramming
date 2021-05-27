#include <iostream>
using namespace std;

int main()
{
	cout << "Masukkan jumlah berapa banyak angka yang akan anda jumlahkan" <<endl;
	int x, y, sum;
	cin >> x;
	x=y;
	
	int a[x];
	
	do 
	{
		cout << "masukkan angka ke " << x+1 << endl;
		cin >> a[x];
	}
	while (x<=y);
	sum += a[x];
	cout << "totalnya adalah" << sum << endl;
	return 0;
}
