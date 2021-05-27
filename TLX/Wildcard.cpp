#include <iostream>
using namespace std;

int main()
{
	string x("*");
	string a;
	int banyak;
	string kata[100];
	int tc,ans=0;
	cin >> a;
	cin >> banyak;
	size_t found = a.find(x);
    if (found!=std::string::npos)
    a.erase (found,10000);
    for (int i=1 ; i<=banyak ; i++)
    {
    	cin >> kata[i];
	}
	for (int b=1 ; b<=banyak ; b++)
	{
	size_t found = kata[b].find(a);
    if (found!=std::string::npos)
    cout << kata[b] << endl;
	}
	return 0;
}
