#include<iostream>
using namespace std;

bool isPrime(int n) // function to check if the number is prime
{
    for(int i = 2 ; i < n ; i ++) 
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}

void primeFactors(int n) // n passed from main is 232
{
    for(int i = 2; i <= n ; i ++)
    {
        if(isPrime(i)) // if i is prime, the control goes into if block
        {
            int x = i ; // x = 2 
            while( n%x == 0 ) // control goes in while block if 232 % x == 0
            {
                cout << i << " " ; // print(i)
                x = x*i ;  // update the value of x 
            }
        }
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    primeFactors(n); 
    return 0;
}