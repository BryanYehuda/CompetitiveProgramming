#include <iostream>
using namespace std;

int main ()
{
	cout << "please enter your age" << endl;
	int age;
	cin >> age;
	;
	if (age>14)
	{
		if(age>18)
		{
			cout << "youre an adult";
		}
		else 
		{
			cout << "youre a teenager";
		}
	}
	else 
	{
		cout << "youre a child";
	}
	return 0;
}
