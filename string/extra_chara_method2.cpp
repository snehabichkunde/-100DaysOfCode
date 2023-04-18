// time complexity 
#include<iostream>
#include<string>
using namespace std;
char find_extra(string s1, string s2)
{
    int count[256] = {0};
    for (char x : s1) {
        count[x]++;
    }
    for (char x : s2) {
        count[x]--;
    }
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return (char)i;
        }
    }
    return '\0'; // added to handle case when no extra character is found
}

int main()
{
    string s1 = "aabbscd";
    string s2 = "aabbsfcd";
    cout << find_extra(s1, s2) << endl;
    return 0;
}