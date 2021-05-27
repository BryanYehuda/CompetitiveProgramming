#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
char arr[100005];

int main()
{
	scanf ("%s",arr);
	int _len=strlen(arr);
	int _zero=0,_one=0;
	for (int _i=0;_i<_len;_i++)
	{
		if(arr[_i]=='0') _zero++;
		else _one++;
	}
	if(_len%2==0 && (_zero==_len || _one==_len))
	printf("NO\n");
	else printf("YES\n");
	return 0;
}
