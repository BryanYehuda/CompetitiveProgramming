#include <iostream>
using namespace std;

int main ()
{
	int cases,x,y,sum=0,remainder=0,revx=0,revy=0,revsum=0;
	cin >> cases;
	while (cases--)
	{
		cin >> x >> y;
		while (x !=0)
		{
			remainder = x%10;
			revx = revx*10 + remainder;
			x /=10;
		}
		while (y !=0)
		{
			remainder = y%10;
			revy = revy*10 + remainder;
			y /=10;
		}
		sum = revx + revy;
		while (sum !=0)
		{
			remainder = sum%10;
			revsum = revsum *10 +remainder;
			sum /= 10;
		}
		 cout << revsum << endl;
		 revsum=0;
		 revx=0;
		 revy=0;
		 remainder=0;
		 sum=0;
	}
	return 0;
}





    

