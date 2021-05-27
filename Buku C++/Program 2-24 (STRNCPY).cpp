#include <iostream>
#include <cstring>
using namespace std;

char s1[50], s2[50], s3[50];

int main()
{
	strcpy (s1,"XXXXXXXXXXXXXXXXX");
	strcpy (s2,"salin");
	strncpy (s1,s2,4); // menyalin sebanyak 4 char dari s2 dan menimpa ke s1 karena s1 sudah berisi
	strncpy (s3,s2,4); // menyalin sebanyak 4 char dari s2 dan memasukkan ke s3
	cout << s1 << endl << s2 << endl << s3 << endl;
	return 0;
}
