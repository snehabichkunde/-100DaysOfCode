#include<iostream>
#include<string>
using namespace std;
string decimal_to_binary(int n)
{
    string s = " ";

    while(n>0){
        int i = n%2;
        s = to_string(i)+ s;
        n = n/2;
    }
    return s;
}
int main ()
{
    int i;
    cin >> i;
    cout << decimal_to_binary(i);
    return 0;
}