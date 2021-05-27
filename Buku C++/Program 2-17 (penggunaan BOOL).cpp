#include <iostream>
using namespace std;

int main()
{
	bool benar;
	int a,b;
	cout << "masukkan angka untuk A" << endl;
	cin >> a;
	cout << "masukkan angka untuk B" << endl;
	cin >> b;
	benar = a > b;
	if (benar==true)
	{
		cout << "A lebih besar daripada B" << endl;
	}
	else cout << "B lebih besar daripada A" << endl;
	return 0;
}
