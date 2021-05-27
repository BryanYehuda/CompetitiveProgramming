// C++ program to find LCM of n elements
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int ll;
int tc,arr[5];
 
// Utility function to find GCD of 'a' and 'b'
int gcd(int a, int b)
{
    if (b==0)
        return a;
    return gcd(b, a%b);
}
 
// Returns LCM of array elements
ll findlcm(int arr[], int n)
{
    // Initialize result
    ll ans = arr[0];
 
    // ans contains LCM of arr[0],..arr[i]
    // after i'th iteration,
    for (int i=1; i<n; i++)
        ans = ( ((arr[i]*ans)) /
                (gcd(arr[i], ans)) );
 
    return ans;
}

void scanint(int &res)
{
	int c = getchar();
	res = 0;
	for(;(c<48 || c>57); c = getchar());  // kalau di compile di dev C++ _unlocked nya dihapus, tulis getchar()
	for(;c>47 && c<58;c = getchar())      // kalau sudah di submit di online judge baru di tulis getchar_unlocked()
	       res = (res<<1) + (res<<3) + c - 48;
}

int main() 
{
	scanint(tc);
	for (int d=1;d<=tc;d++)
	{
		for (int g=0;g<=4;g++)
		{
			scanint(arr[g]);
		}
    int n = sizeof(arr)/sizeof(arr[0]) ;
    int x = findlcm(arr, n);
	x=x+2000;  
    cout << "Case #" << d << ": " << x << endl;
    }
    return 0;
}
