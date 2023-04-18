// time complexity O(log(n))
#include<iostream>
#include<string>
using namespace std;
char find_extra(string s1, string s2)
{
    int l = s1.length();
    for(int i=0; i<l; i++)
    {
        if(s1[i]!=s2[i]){
            return s2[i];
        }
    }
    return s2[l];
}
int main ()
{
    string s1 = "abcdef";
    string s2 = "abcdhef";
    cout << find_extra(s1,s2) << endl;
    return 0;
}