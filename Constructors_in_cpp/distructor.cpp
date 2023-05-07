#include<iostream>
using namespace std;
int count = 0;
class num{
    public:
       num(){
           count ++;
           cout << "This is the time constructor is called for object number" << count << endl;
       }

       // Distructor never takes argument or does not return any value

    ~num(){
        cout << "This is the time constructor is called for object number" << count << endl;
        count --;
    }
};

int main ()
{
    cout << "Entering the main function " << endl;
    cout << "Creating 1st object n1" << endl;
    num n1;
    {
        cout << "Entering the block" << endl;
        cout << "Creatig 2 more onjects" << endl;
        num n2, n3;
        cout << "Exiting the block" << endl;
    }
    cout << "Exiting the main function" << endl;
    return 0;
}