#include<iostream>
#include<string>
using namespace std;

void binary_to_decimal (string input)
{
    int l = input.length() - 1;
    int base = 1;
    int ans = 0;
    while(l>=0){
        ans = ans + ((int)input[l] - '0') * base;
        base = base*2;
        l--;
    }
    cout << ans;
}

int main()
{
    string str;
    cin >> str;
    binary_to_decimal(str);
    cout << endl;
    return 0;
}
