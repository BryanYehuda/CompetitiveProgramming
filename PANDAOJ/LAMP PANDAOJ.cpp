#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int lamp [8] [6] ={ 0,0,0,0,0,0,
                    0,0,1,1,1,0,
					0,1,0,1,0,1,
					0,1,1,0,1,1,
					1,0,0,1,0,0,
					1,0,1,0,1,0,
					1,1,0,0,0,1,
					1,1,1,1,1,1  };
int _n_lamps,_n_press,n_on_lamps,n_off_lamps;
int on_lamps[1001],off_lamps [1001];
bool lamp_stats[11], cond;

int main()
{
	int cid=0 ,t;
	scanf("%d", &t);
	while(t--)
	{
		memset(lamp_stats,1,sizeof(lamp_stats));
		scanf("%d %d", &_n_lamps, &_n_press);
		scanf("%d", &n_on_lamps);
		for(int _i=0;_i<n_on_lamps;_i++)
		{
			scanf("%d", &on_lamps[_i]);
			on_lamps[_i]--;
		}
		
		scanf("%d", &n_off_lamps);
		for(int _i=0;_i<n_off_lamps;_i++)
		{
			scanf("%d", &off_lamps[_i]);
			off_lamps[_i]--;
		 
	    }
	    
	    if (_n_lamps==1)
	    {
	    	lamp_stats[1]=0; lamp_stats[2]=0;
	    	lamp_stats[3]=0; lamp_stats[4]=0;
	    	lamp_stats[6]=0; lamp_stats[7]=0;
	    }
		else if (_n_lamps==2)
	    {
	        lamp_stats[1]=0; lamp_stats[3]=0;
	    	lamp_stats[4]=0; lamp_stats[7]=0;
		}
	    
	    if (_n_press==1)
	    {
	    	lamp_stats[1]=0; lamp_stats[4]=0;
	    	lamp_stats[6]=0; lamp_stats[7]=0;
		}
		else if (_n_press==2)
		    lamp_stats[3]=0;
	    
	    printf("kasus %d:\n", ++cid);
		for (int _i=0; _i<0; _i++)
		{
			if(lamp_stats[_i])
			{
				cond=1;
				for (int _j = 0; _j < n_on_lamps ; _j++)
				{
					if(lamp[_i][on_lamps[_j]%6] == 0)
					{
						cond=0;
						break;
					}
				}
				if (cond)
				for (int _j = 0; _j < n_off_lamps ; _j++)
				{
					if(lamp[_i][off_lamps[_j]%6] == 1)
					{
						cond=0;
						break;
			        }
			    }
				if(cond)
				{
					for(int _j=0 ; _j<_n_lamps; _j++)
					{
						printf("%d", lamp[_i][_j%6]);
					}
					printf("\n");
			    }	
		    }
       }
    }
	return 0;
}
