#include <iostream>
#include <cstring>
using namespace std;

char s1[30];

int main()
{
	cin.getline(s1,sizeof(s1)); // mengambil input termasuk spasi 
	for (int i=strlen(s1);i>=0;i--)
	{
		cout << s1[i] << endl;
	}
	return 0;
}
