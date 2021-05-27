#include <iostream>
#include <cstring>
using namespace std;

char s1[50];
char s2[50];

int main()
{
	strcpy (s2,"ini adalah contoh penyalinan string"); //menggunakan strcpy kita bisa memasukkan string dengan spasi
	strcpy (s1,s2);
	cout << s1 << endl;
	return 0;
}
