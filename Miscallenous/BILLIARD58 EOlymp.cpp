#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	long long m,n;
	cin >> m >> n;
	long long tmp = __gcd(m,n);
	m = m/tmp;
	n = n/tmp;
	if (m%2==1&&n%2==1) cout << m+n-2 << " " << 3 << endl;
	else if (m%2==1&&n%2==0) cout << m+n-2 << " " << 4 << endl;
	else if (m%2==0&&n%2==1) cout << m+n-2 << " " << 2 << endl;
	else if (m==n) cout << m+n-2 << " " << 1 << endl;
	return 0;
}
