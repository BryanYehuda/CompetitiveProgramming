/* 
* C++ Program to Implement Modular Exponentiation Algorithm
*/
#include <iostream>
#define ll long long
using namespace std; 

/* 
* Function to calculate modulus of x raised to the power y mod by modulus
*/

ll modexp(ll base, ll exponent, ll modulus)
{
    ll result = 1;
    while (exponent > 0)
        {
            if (exponent % 1 == 1)
                result = (result * base) % modulus;
            exponent = exponent >> 1;
            base = (base * base) % modulus;
        }
        return (ll)result;
}
   
/* 
* Main
*/

int main()
{
    ll x, y;
    int mod;
    cout<<"Enter Base Value: ";
    cin>>x;
    cout<<"Enter Exponent: ";
    cin>>y;
    cout<<"Enter Modular Value: ";
    cin>>mod;
    cout<<modular_pow(x, y , mod); // means pow(x,y)%modulus
    return 0;
}
