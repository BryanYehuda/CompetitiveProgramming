#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int x=1;x<=n;x++)
	{
		if (x==1)
		{
		}
		else cout << endl;
		for (int y=1;y<=n;y++)
		{
			if (y==1||y==n||x==1||x==n)
			{
			cout << "X ";
		    }
		    else cout << "  ";
		}
	}
	return 0;
}





