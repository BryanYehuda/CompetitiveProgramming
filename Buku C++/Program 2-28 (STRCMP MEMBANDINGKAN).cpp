#include <iostream>
#include <cstring>
using namespace std;

char s1[20],s2[20],s3[20],s4[20];

int main()
{
	strcpy (s1,"COBA");// huruf besar lebih kecil dari huruf kecil dalam urutan bahasa
	strcpy (s2,"COBA");
	strcpy (s3,"Coba");
	strcpy (s4,"coba");
	cout << strcmp(s1,s2) << endl << strcmp(s1,s3) << endl << strcmp(s4,s3) << endl;
	return 0;
}
