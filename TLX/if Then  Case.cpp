#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	if (a<10 && a>0)
	{
		cout << "satuan" << endl;
	}
	else if (a<100)
	{
		cout << "puluhan" << endl;
	}
		else if (a<1000)
	{
		cout << "ratusan" << endl;
	}
		else if (a<10000)
	{
		cout << "ribuan" << endl;
	}
	else if (a<100000)
	{
		cout << "puluhribuan" << endl;
	}
	return 0;
	
}
