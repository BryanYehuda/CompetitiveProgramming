#include <iostream>
#include <algorithm>
using namespace std;

void scanint(int &res)
{
	int c = getchar();
	res = 0;
	for(;(c<48 || c>57); c = getchar());  // kalau di compile di dev C++ _unlocked nya dihapus, tulis getchar()
	for(;c>47 && c<58;c = getchar())      // kalau sudah di submit di online judge baru di tulis getchar_unlocked()
	       res = (res<<1) + (res<<3) + c - 48;
}

int a[20002];

int main()
{
	int t, cid = 0;
	scanint(t);
	while (t--)
	{
		int n, s = 0, l = 0; a[0] = 0;
		scanint(n);
		for (int i=1 ; i<=n ; i++)
			scanint(a[i]) , a[i] ^= a[i-1];
			sort(a,a+n+1);
			for (int i =1 ; i<=n ; i++)
				if (a[i] != a[l]) s+=(i-l) * (i-l-1) / 2, l=i;
		printf("Case #%d: %d\n" , ++cid, s+(n+1-l) * (n-l)/2);
	}
	return 0;
}
