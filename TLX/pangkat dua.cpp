#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int x;
	cin >> x;
	for (int i = 0; i <=16 ; i ++ )
	{
		if (pow(2,i)<x) continue;
			else 
			if (pow(2,i)==x) 
			{
				cout << "ya" << endl; break;
			}
			else cout << "bukan" << endl; break;
	}
	return 0;
}
