#include<iostream>
#include<string>
using namespace std;
bool is_angram(string s1, string s2)
{
    int n1 = s1.length();
    int n2 = s2.length();
    if (n1 != n2)
        return false;
    int count[256] = {0};
    for(int i=0; i<n1; i++)
    {
        count[s1[i]]++;
    }
    for (int i=0; i<n1; i++)
    {
        count[s2[i]]--;
    }
    for(int i=0; i<256; i++)
        if(count[i]!=0)
           return false;
    return true;
}
int main ()
{
    string str1 , str2;
    cin >> str1 >> str2;
    if (is_angram(str1, str2)){
        cout << str1 << " and " << str2 << " are angram" << endl;
    }
    else{
        cout << str1 << " and " << str2 << " are not angram" << endl;
    }
}