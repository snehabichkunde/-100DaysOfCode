// In this programm we will write the table of given number by keybord
// using while 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i <= 10){
        cout<< n*i << endl;
        i++;
    }
    return 0;
}