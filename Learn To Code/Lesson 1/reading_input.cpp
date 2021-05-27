#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "please enter the first number you want"<< endl;
    cin >> a;
    // reads the input a or first number
    cout << "please enter the second number you want"<< endl;
    cin >> b;
    // reads the input b or second input
    int sum = a+b;
    cout << "the sum is" << endl << sum;
    return 0;
}
