#include<iostream>
using namespace std;
void reverse_dig(int &a,int &b)
{
    int reverse_a , reverse_b;
    while(a!=0){
        int digit = a%10;
        reverse_a = (reverse_a * 10)+ digit;
        a/=10;
    }
    a = reverse_a;
    while(b!=0){
        int digit = b%10;
        reverse_b = (reverse_b *10) + digit;
        b/=10;
    }
    b = reverse_b;
}
void swap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main ()
{
    int a , b;
    cin >> a;
    cin >> b;
    reverse_dig (a,b);
    swap(a,b);
    cout << a << " " << b << endl;
    return 0;
}