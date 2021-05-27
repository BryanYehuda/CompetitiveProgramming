#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	int a,b,t;
	while (scanf("%d %d", &a, &b)==2){
	    int	k = 0;
		t = (a+b) / __gcd(a, b);
		while (t%2 == 0)
		{
			t = t / 2; k++;
		}
	if (t>1) k =-1;
	cout << k << endl;
	}
	return 0;
}
