#include <iostream>
using namespace std;

int print_divide()
{
    cout << "Test" << 10 / 5 << endl; 
}

int main()
{
    cout << "Integer division: 9/5 = " << 9/5 << endl;
    cout << "Mixed division: 9.0/5 = " << 9.0/5 << endl;
    cout << "Floating divison: 9.0/5.0 = " << 9.0 / 5.0 << endl;
    cout << print_divide << endl;
    return 0;
}