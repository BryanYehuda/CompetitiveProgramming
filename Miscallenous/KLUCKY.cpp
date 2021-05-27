#include <iostream>
using namespace std;

int tc,n;

int main()
{
	cin >> tc;
	while (tc--)
	{
		long long p=5,sum=0;
		cin >> n;
		while (n) // selama n belum 0, maka diloop terus
		{
			sum += (n&1)?p:0; // jika di dalam kurung benar, maka ambil p, jika salah ambil 0
			n>>=1; // geser kanan sama dengan membagi, geser kiri sama dengan mengkali
			p*=5;
		}
		cout << sum << endl;
	}
	return 0;
}
