#include <iostream>
using namespace std;

int main ()
{
	int a,b;
	a = 10;
	b = 10;
	int higher = a+b*b;
	// the computer will process the multiply first
	int kurung = (a+b)*b;
	cout << higher << endl << kurung;
	return 0;
}
