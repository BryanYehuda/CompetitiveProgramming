#include <iostream>
using namespace std;

int main ()
{
	int a = 10;
	a+=4;
	// a += 4 is the same with a=a+4
	int b = 10;
	b-=6;
	// b-=6 is the same wih b=b-6
	int c= 10;
	c*=4;
	// c*4 is the same with c=c*4
	int d = 10;
	d/=6;
	// d/=6 is the same with d=d/6
	int e = 10;
	e%=4;
	// e%=6 is the same with e=e%6
	cout << a << endl << b << endl << c << endl << d << endl << e;
	return 0;
}
