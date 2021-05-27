#include <iostream>
#include <cstring>
using namespace std;

char s1[20], s2[20], spasi[5];

int main()
{
	strcpy (s1, "namaku adalah");
	strcpy (spasi, " ");
	strcat (s1,spasi);
	strcpy (s2,"BRYAN");
	strcat (s1,s2);
	cout << s1 << endl;
	return 0;
}
