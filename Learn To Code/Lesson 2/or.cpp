#include <iostream>
using namespace std;

int main ()
{
	int age = 20;
	int mark = 95;
	if(age>35||mark>90)
	// or can also be used more than one
	//or only needs one of them true and the expressions will be true
	cout << "youre accepted" <<endl;
	else
	cout << "youre not accepted";
	return 0;
}
