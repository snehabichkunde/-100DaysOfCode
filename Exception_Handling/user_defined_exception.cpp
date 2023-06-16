#include <iostream>
using namespace std;
#include<exception>

class MyException: public exception{
    public:
    virtual const char *what() const throw()
    {
        return "Exception occured";
    }
};
int main()
{
    try{
        throw MyException();
    }
    catch (MyException &e){
        cout << e.what() << endl;
    }
    return 0;
}