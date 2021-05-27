#include <cstdio>
using namespace std;

int tc,a[11],target,total;

int main()
{
	scanf("%d",&tc);
	int no=0;
	while (tc--)
	{
		total=0;
		bool flag=0;
		scanf ("%d%d%d%d%d%d&d",&a[0],&a[1],&a[2],&a[3],&a[4],&target);
		for (int ii=0;ii<(1<<5);ii++)
		{
			total=0;
			for (int jj=0;jj<=4;jj++)
			{
				if (ii&(1<<jj)) total=total+a[jj];
			}
			if(total==target)
			{
				flag=1;
				break;
			}
		}
		printf("Case #%d: ",++no);
		if(flag) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
