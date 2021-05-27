#include<cstdio>
using namespace std;

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	// reading the input
	int ans=a+b;
	printf("%d %d\n",ans);
	// printing the output
	return 0;
}
// cstdio is faster than iostream

#include <iostream>
using namespace std;

int main()
{
	int a,b,sum;
	cin >> a >> b;
	// reading the input
	sum = a+b;
	cout << sum;
	// printing the output
	return 0;
}
// iostream is slower than cstdio
