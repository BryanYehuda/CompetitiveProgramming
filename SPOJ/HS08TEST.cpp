#include <iostream>
using namespace std;

int main ()
{
	int money;
	float akun;
	cin >> money >> akun ;
	if (money%5==0)
	{
		if (money < akun)
		{
			akun = akun - money - 0.5;
			cout << akun << endl;
		}
		else cout << akun;
	}
	else cout << akun;
	return 0;
}
