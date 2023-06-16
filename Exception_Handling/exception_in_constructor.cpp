#include<iostream>
using namespace std;
class Demo {
    int x;
    public:
    Demo(int x){
        try {
            if(x == 0){
                throw "Zero is not allowed";
            }
            this -> x = x;
            show();
        }
        catch (const char *c){
            cout << "Exception is caught\n";
            cout << c << endl;
        }
        
    }
    void show()
    {
        cout << x << endl;
    }
};

int main()
{
    Demo d1(0);
    Demo d2(2);
    return 0;
}