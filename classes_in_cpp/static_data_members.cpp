#include <iostream>
using namespace std;
class Employee
{
private:
    int Id;
    static int counter;

public:
    void getId()
    {
        cout << "Enter the Id of of Employee no. " << counter << endl;
        cin >> Id;
    }
    void getData()
    {
        cout << "The id of the employee no." << counter << " is " << Id << endl;
    }
    static void  getCounter()
    {
        // cout << Id;  -> this will through an error
        cout << "Count = " << counter << endl;
    }
};

int Employee:: counter =1;
int main()
{
    Employee Sneha, Suraj, Vinod;
    Sneha.getId();
    Sneha.getData();
    Employee:: getCounter();

    Suraj.getId();
    Suraj.getData();
    Employee:: getCounter();

    Vinod.getId();
    Vinod.getData();
    Employee:: getCounter();
    return 0;
}