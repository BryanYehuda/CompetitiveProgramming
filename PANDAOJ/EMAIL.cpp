#include <iostream>
using namespace std;

int tc,n;

int main()
{
	string a;
	string x ("@");
	cin >> tc;
	for (int i=1 ; i <=tc ; i++)
	{
		cin >> a;
		size_t found = a.find(x);
        if (found!=std::string::npos)
        a.erase (a.begin()+0, a.end()-found);
		cout << a;  
	}
}
