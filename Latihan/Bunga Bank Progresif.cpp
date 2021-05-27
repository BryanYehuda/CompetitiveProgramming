#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

float saldo, bunga, bulan;

int main ()
{
	cin >> saldo >> bunga >> bulan;
	bunga = bunga / 12;
	for (int i =1 ; i <= bulan ; i++)
	{
		saldo = saldo + (saldo*bunga)/100;
	}
	cout << saldo << endl;
	return 0;
}
