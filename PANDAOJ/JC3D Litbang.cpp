#include <cstdio>
using namespace std;

int main()
{
	int T; scanf("%d",&T);
	for (int tc=1;tc<=T;++tc)
	{
		int N,M;
		bool hbd=false;
		scanf("%d%d",&N,&M);
		int max=0;
		while(N--)
		{
			int temp;
			scanf("%d",&temp);
			if (temp<=M && temp>max)
			{
				max=temp;
				hbd=true;
			}
		}
		if(hbd) printf("Case #%d: %d\n",tc,max);
		else printf ("Case #%d: HAPPY BIRTHDAY ANTONIO\n",tc);
	}
	return 0;
}
