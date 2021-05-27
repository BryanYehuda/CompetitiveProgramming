#include <iostream>
using namespace std;

int contoh()
{
	static int A = 0; // variable static akan menyimpan hasil terakhir dari setiap perubahan
    A += 10;          // yang terjadi kepada variable tersebut
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
