#include <iostream>
using namespace std;

int main()
{
	int m,n,r,b,KPK,FPB,j,k;
	cout << "Enter the First Number" << endl;
	cin >> j;
	m=j;
	cout << "Enter the Second Number"<< endl;
	cin >> k;
	n = k;
	if (n>m)
	{
		b=n;
		n=m;
		n=b;
	}
	while (n>0)
	{
	r = m%n;
	m=n;
	n=r;
    }
    FPB = m;
    cout << "FPB nya adalah" << endl << FPB << endl;
    KPK = (j*k)/FPB;
    cout << "kPK nya adalah" << endl << KPK << endl;
    return 0;
}
