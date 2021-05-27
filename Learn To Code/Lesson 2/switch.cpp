#include <iostream>
using namespace std;

int main ()
{
	int age = 16;
	switch (age)
	{
	case 17:
	// it uses : NOT ;	
        cout << "too young";
	    break;
	case 42:
		cout << "adult";
		break;
	case 65:
		cout << "senior";
		break;
	default:
	cout << "not in database";
	// if no cases matches the default will run
	}
	return 0;		
}
// switch test wether the test matches the cases
