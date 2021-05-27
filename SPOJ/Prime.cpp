//Finding prime numbers
#include <iostream>
using namespace std;

int main()
{
int n; //User input
int num = 1; //number that will be tested if its a prime
int primeCount = 0; //counts the times it num % i == 0
int y = 1;
int x []={1};
cin >> n;
//counts the number of primes
for(int j = 1; j <= n; j++)
{
    num++;//num = 2
    primeCount = 0;
//Determines if a number is prime
    for(int i = 1; i <= num; i++)
    {

        if(num % i == 0)
        {
            primeCount++;
        }
    }
        if(primeCount == 2)
        {
        	for (y=1;y<n;y++)
            int x [y++]= {num};
        }
}
cout << x << endl;
return 0;
}
