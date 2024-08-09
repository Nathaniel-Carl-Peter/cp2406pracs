#include <iostream>
#include <string>
using namespace std;

void print_divide(void)
{
    // return << "Test" << 10 / 5 << endl; 
    // return "Test" + string(10 / 5);
    cout << "Test" << 10 / 5 << endl;
}

int main(){
    cout << "Integer division: 9/5 = " << 9/5 << endl;
    cout << "Mixed division: 9.0/5 = " << 9.0/5 << endl;
    cout << "Floating divison: 9.0/5.0 = " << 9.0 / 5.0 << endl;
    // cout << print_divide() << endl;
    print_divide();
    return 0;
}