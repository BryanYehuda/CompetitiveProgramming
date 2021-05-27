#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "this is a calculator" << endl;
    cout << "made by Bryan Yehuda" << endl;
    cout << "please enter the first number you want"<< endl;
    cin >> a;
    // reads the input a or first number
    cout << "please enter the second number you want"<< endl;
    cin >> b;
    // reads the input b or second input
    int sum = a+b;
    // for sum use +
    cout << "the sum is" << endl << sum << endl;
    int division = a/b;
    // for division use / , if divided by 0 the program will crash, if there are decimal points it will be floored
    cout << "the division is" << endl << division << endl ;
	int multiply = a*b;
	//for multiplying use *
	cout << "the multiply is" << endl << multiply << endl;
	int minus = a-b;
	// for extracting us -
	cout << "the extraction is" << endl << minus << endl;
	int mod = a%b;
	// for modulus use %
	cout << "the modulus is" << endl << mod << endl; 
    return 0;
}
