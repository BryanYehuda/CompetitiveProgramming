#include <iostream>
using namespace std;

int main()
{
	int num = 1;
	int number;
	while (num<=5)
	{
		cin >> number;
		// asking for input
		num = num +1;
	}
	cout << number;
	//only the last will be printed
	return 0;
}
