#include <iostream>
using namespace std;

int main ()
{
	int a;
	cin >> a;
	switch (a)
	{
	case < 10:	
        cout << "satuan" << endl;
	    break;
	case < 100:
		cout << "puluhan" << endl;
		break;
	case < 1000:
		cout << "ratusan" << endl;
		break;
	case < 10000:
		cout << "ribuan" << endl;
		break;
    case < 100000:
		cout << "puluhribuan" << endl;
		break;
	}
	return 0;		
}
