#include <iostream>
#include <cstring>
using namespace std;

char nama[5];

int main()
{
	strcpy (nama,"Bimo"); // dengan menggunakan strcpy kita bisa memasukkan string dengan spasi
	cout << "karakter ke 0 " << nama[0] << endl;
	cout << "karakter ke 1 " << nama[1] << endl;
	cout << "karakter ke 2 " << nama[2] << endl;
	cout << "karakter ke 3 " << nama[3] << endl;
	cout << "karakter ke 4 " << nama[4] << endl;
	return 0;
}
