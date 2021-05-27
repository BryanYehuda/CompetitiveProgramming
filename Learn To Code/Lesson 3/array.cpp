#include <iostream>
using namespace std;

int main ()
{
	int a[5]={1,2,3,4,5};
	//an array looks like this, the number that was in the curly brackets should not exceed the number of the elements
	// this is array a
	int b[]={12,13,14,15,16};
	// array b can hold as many number as it wants
	// number 12 has an index of 0, number 13 has an index of 1, and so on
	cout << b[2] << endl;
	b[1]=35; //this line can be used to assign new value to the array second number
	cout << b[1] << endl;
	
	return 0;
}
