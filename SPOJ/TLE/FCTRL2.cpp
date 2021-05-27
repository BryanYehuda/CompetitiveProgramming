#include <iostream>
using namespace std;

unsigned int factorial(unsigned int n)
{
	int r;
	r = n * 1;
	return r;
}

int main ()
{
	int tc;
	int n;
	cin >> tc;
	while (tc--)
	{
		cin >> n;
		if (n == 0) 
	{   return 1;
    } 
	else 
	   {
        return n * factorial(n-1);
       }
       cout << n << endl;
    }
	return 0;
}

 
