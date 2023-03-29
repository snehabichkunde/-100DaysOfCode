// printing the table of given number using do while 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i =1;
    do {
        cout << n*i << endl;
        i++;
    } while (i<=10);
    return 0;
}