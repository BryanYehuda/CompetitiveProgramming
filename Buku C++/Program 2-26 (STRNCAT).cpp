#include <iostream>
#include <cstring>
using namespace std;

char s1[20], s2[20], spasi[5];

int main()
{
	strcpy (s1, "namaku adalah");
	strcpy (spasi, " ");
	strcat (s1,spasi);
	strcpy (s2,"BRYAN YEHUDA MANNUEL");
	strncat (s1,s2,5); // mengambil 5 char pertama dari s2 dan menggabungnya dengan s1
	cout << s1 << endl;
	return 0;
}
