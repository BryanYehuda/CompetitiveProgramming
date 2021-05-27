#include <iostream>
#include <cstring>
using namespace std;

char s1[20], s2[20];

int main()
{
	strcpy (s1,"BRYAN");
	strcpy (s2,"YEHUDA MANNUEL"); //strlen juga akan menghitung karakter spasi (" ")
	cout << strlen(s1) << endl;
	cout << strlen(s2) << endl;
	return 0;
}
