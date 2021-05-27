// CPP program to find sum of all subsets
// of a set.
#include <bits/stdc++.h>
using namespace std;
 
unsigned long long findSumSubsets(int n)
{
    // sum of subsets is (n * (n + 1) / 2) *
    // pow(2, n-1)
    return (n * (n + 1) / 2) * (1 << (n - 1));
}
 
int main()
{
    int n;
    cin >> n;
    cout << findSumSubsets(n);
    return 0;
}
