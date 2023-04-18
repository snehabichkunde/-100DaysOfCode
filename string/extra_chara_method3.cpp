// linear time 
#include<iostream>
#include<string>
using namespace std;
char find_extra (string s1, string s2)
{
    int n = s1.length();
    int res;
    for(int i=0; i<n; i++)
    {
        res = res ^ s1[i] ^ s2[i];
    }
    res = res ^ s2[n];
    return (char) res;
}
int main()
{
    string s1 = "abcde";
    string s2 = "abcdefg";
    char extra = find_extra(s1, s2);
    cout << "The extra character is: " << extra << endl;
    return 0;
}