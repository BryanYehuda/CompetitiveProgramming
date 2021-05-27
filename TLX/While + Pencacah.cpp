#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	int x;
	int ans=0;
	while (scanf("%d",&x)!= EOF)
	{
		ans = ans + x;
	}
	printf("%d\n",ans);
	return 0;
}
