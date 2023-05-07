// Dynamically initialization of objects using constructors
#include<iostream>
using namespace std;

class BankDeposite{
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:
        BankDeposite(){}
        BankDeposite(int p, int y, int r); // r can be int persent form like 4 persent 
        BankDeposite(int p, int y, float r);  // r can be in float form like 0.04
        void show();
};

BankDeposite :: BankDeposite (int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principal;

    for(int i=0; i<y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
}
BankDeposite :: BankDeposite (int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;

    for(int i=0; i<y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
}

void BankDeposite :: show()
{
    cout << "The return value for the principal " << principal << " is " << returnValue << " for " << years << " years" << endl;
}

int main()
{
    BankDeposite dep1, dep2, dep3;
    int p, y;
    float r;
    int R;
    cout << "Entr the values of p, y and r: " << endl;
    cin >> p >> y >> r;
    dep1 = BankDeposite(p, y, r);
    dep1.show();
    cout << "Entr the values of p, y and R: " << endl;
    cin >> p >> y >> R;
    dep2 = BankDeposite(p, y, R);
    dep2.show();
    return 0;
}