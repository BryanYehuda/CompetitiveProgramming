#include <iostream>
#include <algorithm>
using namespace std;

void scanint(int &res)
{
	int c = getchar();
	res = 0;
	for(;(c<48 || c>57); c = getchar());
	for(;c>47 && c<58;c = getchar())
	       res = (res<<1) + (res<<3) + c - 48;
}

int n_male , n_female , rating, male[40002] , female[40002];

int main ()
{
	int tc;
	scanint(tc);
	int no=0;
	while (tc--)
	{
		int ans = 0;
		scanint(n_male);
		scanint(n_female);
		scanint(rating);
		for (int i=1 ; i<=n_male ; i++)
		{
		    scanint(male[i]);	
		}
		for (int i=1 ; i<=n_female ; i++)
		{   
		    scanint(female[i]);
	    }
	    int idx=n_female;
	    for(int i=1 ; i <=n_male ; i++)
	    {
	    	while(1)
	    	{
	    		if (idx==0) break;
	    		else if (male[i]+female[idx] < rating) break;
	    		else idx--;
			}
			ans = ans+n_female-idx;
		}
		printf("Kasus #%d: %d\n", ++no , ans);
	}
	return 0;
}
