#include<iostream>
#include<string>
using namespace std;
bool is_pangram(string s)
{
    int n = s.length();
    if (n<26)
        return false;
    bool visited[26] ={0};
    for(int i=0; i<n; i++)
    {
        char x = s[i];
        if (s[i] >='a' && s[i]<='z')
            visited[x-'a'] = true;
        if (s[i]>='A' && s[i]>='Z')
            visited[x-'A'] = true;
    }
    for(int i=0; i<n; i++)
    {
        if(visited[i]==false)
           return false;
    }
    return true;
}
int main()
{
    string str;
    getline(cin, str);
    if (is_pangram(str))
       cout << str << " " << "is a pangram" << endl;
    else 
       cout << str << " " << "is not a pangram" << endl;
}