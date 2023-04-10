#include<cctype>   // for toupper and tolower
#include<iostream>
#include <string>
using namespace std;
int main()
{
    string str = "Hello, Sneha";
    string sub = "sneha";
    for (char &c : sub)
    {
        c = tolower(c);
    }
    size_t pos = str.find(sub);
    if (pos != std::string::npos) {
    cout << "String found" << endl;
    }
    else{
        cout << "String not found" << endl;
    }
    return 0;
}