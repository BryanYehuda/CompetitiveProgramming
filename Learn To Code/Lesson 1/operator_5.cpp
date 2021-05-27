#include <iostream>
using namespace std;

int main ()
{
	int x,y,z,a,b;
	x=5;
	y=x++;
	// this is the postfix, assigning the value of x to y and then plus 1 to x
	x=5;
	// this line is use so the value of x is back to 5
	z=++x;
	// this is the prefix, plus i to x and then assigning it to z
	x=5;
	a=x--;
	// this is the postfix, assigning the value of x to a and then minus x by 1
	x=5;
	b=--x;
	// this is the prefix, minus x by 1 and then assigining the value of x to b
	cout << y << endl << z << endl << a << endl << b;
    return 0;
}
