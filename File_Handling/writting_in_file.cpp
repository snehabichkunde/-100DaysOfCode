#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("output.txt");
    if(!fout){
        cout << "Error in opeing file\n";
        return 0;
    }
    fout << "Hello\n";
    return 0;
}