#include <iostream>
#include <cmath>
using namespace std;
#define PI acos(-1.0) // harus memasukkan header <cmath>

int r;
double hasil;

int main ()
{
	cout << "masukkan jari jari lingkaran" << endl;
	cin >> r;
	hasil = r * r * PI;
	cout << "luas lingkaran adalah " << hasil << endl;
	return 0;
}
