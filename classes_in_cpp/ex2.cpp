#include<iostream>
#include<string>
using namespace std;
class binary{
    private:
    string s;

    public:
    void read();
    void check_bin();
    void ones_compliment();
    void display();
};

void binary:: read()
{
    cout << "Enter the binary no.: ";
    cin >> s; 
}

void binary :: check_bin()
{
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]!='0'&&s[1]!='1'){
            cout << "invalid input";
            exit(0);
        }
    }
}

void binary:: ones_compliment()
{
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='0'){
            s[i] ='1';
        }
        else{
            s[i]='0';
        }
    }
}

void binary :: display()
{
    for(int i=0; i<s.length(); i++)
    {
        cout << s[i];
    }
    cout << endl;
}

int main ()
{
    binary b;
    b.read();
    b.check_bin();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}