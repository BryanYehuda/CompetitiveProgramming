#include <cstdio>
using namespace std;
int tc,n,no;

int main()
{
	scanf("%d",&tc);
	no=0;
	while (tc--)
	{
		scanf("%d",&n);
		int ans=0;
		for (int i=1;i<=n;i++)
		{
			int j = n-i;
			if(i>=j) break;
			if(i%2==1 && j%2==1) ans+=i-1;
			else if(i%2==1 && j%2==0) ans+=i;
			else if(i%2==0 && j%2==1) ans+=i;
			else if(i%2==0 && j%2==0) ans+=i-1;
		}
		printf("Case #%d: %d\n", ++no,ans);
	}
	return 0;
}
