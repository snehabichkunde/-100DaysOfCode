#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout << "Enter the sring with spaces: ";
    getline (cin, str);
    // takes two arguments 1) an input string 2) string varible
    cout << "You just entered: " << str << endl;
    return 0;
}