#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
long long N,answer,M;

int main()
{
	cin >> N;
	M = (long long)sqrt((double)N-1.0); //sqrt minta double, jadi integernya dijadikan double dulu
	answer += M * (M+1) * 2;
	answer += (N - M*M) * 2;
	answer++;
	if (N - M*M>M) answer++;
	cout << answer<< endl;
	return 0;
}
