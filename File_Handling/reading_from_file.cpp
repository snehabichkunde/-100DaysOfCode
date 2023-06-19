#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    char ch;
    ifstream fin;
    fin.open("test.txt");
    if(!fin){
        cout << "Error in opening the file\n";
        return 0;
    }
    while(fin.get(ch)){
        cout << ch;
    }
    fin.close();
    return 0;
}