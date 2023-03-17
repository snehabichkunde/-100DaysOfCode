// Code implementation showing the use of left, right, setfill, setw

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << left << setw(10) << setfill('-') << "Apple" << endl;  // Output: Apple-----
    cout << right << setw(10) << setfill('-') << "Orange" << endl;  // Output: ----Orange
    return 0;
}