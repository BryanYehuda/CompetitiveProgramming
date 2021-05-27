#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

char arr[1005];
int x,y,no,tc;

int main()
{
	no=0;
	scanf("%d",&tc);
    while (tc--)
	{
		scanf("%s",arr);
		x=0;
		y=0;
		int p=strlen(arr);
		for (int i=0;i<p;i++)
		{
			if (arr[i]=='U') x++;
			else if (arr[i]=='S') x--;
			else if (arr[i]=='T') y++;
			else if (arr[i]=='B') y--;
		}
		int k=abs(x)+abs(y);
		printf("Kasus #%d: %d\n",++no,k);
	}
	return 0;
}
