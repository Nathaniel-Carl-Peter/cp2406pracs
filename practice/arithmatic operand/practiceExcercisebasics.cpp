/*
Perform basic math operators
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    int add = 9 + 10;
    int subtraction = 4-2;
    int float_div = 9.0 / 3.0 ;
    cout << "Integer division: 9/5 = " << 9/5 << endl;
    cout << "Mixed division: 9.0/5 = " << 9.0/5 << endl;
    cout << "Floating divison: 9.0/5.0 = " << 9.0 / 5.0 << endl;
    cout << "Addition: " << add << endl;
    // 9 + 10 = 19
    cout << "Subtraction: "<< subtraction << endl;
    // 4-2 = 2
    cout << "Float Division: "<< float_div << endl;
    //9.0 / 3.0 = 3
    // cout << print_divide() << endl;
}