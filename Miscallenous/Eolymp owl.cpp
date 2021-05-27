#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long val,n;
	cin >> n;
    val =(long long)floor(sqrt((double)n));
    if (val*val==n) cout << n-1 << " " << val*(val+2);
    else if ((val+1)*(val+1)==n+1) cout << n << " " << n;
    else cout << (val*val)-1 << " " << val*(val+2) ;
	return 0;
}

