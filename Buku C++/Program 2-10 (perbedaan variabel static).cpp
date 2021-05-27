#include <iostream>
using namespace std;

int contoh()
{
	int A = 0;
    A += 10;
    return A;
}

int main ()
{
	int a,b,c;
	a = contoh();
	b = contoh();
	c = contoh();
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	return 0;
}
