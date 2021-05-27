#include <iostream>
using namespace std;

int a;

void test()
{
	a = 20;
	cout << a << endl;
}

int main ()
{
	a = 10;
	cout << a << endl;
	test();
	return 0;
}
