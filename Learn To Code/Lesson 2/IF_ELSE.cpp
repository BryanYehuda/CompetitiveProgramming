#include <iostream>
using namespace std;

int main ()
{
	int mark = 6;
	if (mark>=7)
	//if the statement is true this will be executed
	{
		cout << "You Pass The test" <<endl;
		cout << "Congratulations" <<endl;
		cout << "Youre Awesome" <<endl;
		// we can put as many statements as we want
	}
	else
	//if the statement is false this will be executed
	{
		cout << "You Failed The test" <<endl;
		cout << "You need to study more" << endl;
		cout << "meet me after school" << endl;
	}
	return 0;
}
