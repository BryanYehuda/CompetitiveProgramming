#include <iostream>
using namespace std;

int main ()
{
	int cases,CT,lab,prep,rep,classes,hour;
	int sum = 24;
	cin >> cases;
	while (cases--)
	{
		cin >> CT >> lab >> prep >> rep >> classes;
	    hour = CT + lab + prep + rep + classes + 10;
	    sum -= hour;
		if (sum >= 3)
		{
			cout << "Khushi" << endl;
		}
		else cout << "Hotash" << endl;
	}
	return 0;
}
