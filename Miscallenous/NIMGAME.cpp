#include <iostream>
using namespace std;

int n=2000,a,flag;

int main()
{
	for (int i=1;i<=n;i++)
	{
		flag = 0;
		for (a=1;a<=i/2;a++)
		{
			while(i>=0)
			flag +=1;
			i=i-a;
            if (flag%2==0)
			{
				cout << i << endl;
			}  
		}
	}
	return 0;
}
