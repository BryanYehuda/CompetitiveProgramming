#include <iostream>
using namespace std;

int main ()
{
	int num = 1;
	int number;
	int total = 0;
	
	while (num<=5)
	{
		cout<< "please enter a number" << endl;
		cin >> number;
		total += number;
		num +=1;
	}
	cout << "the total is" << endl << total << endl;
	return 0;
}
