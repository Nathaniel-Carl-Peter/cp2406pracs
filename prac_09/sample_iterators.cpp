#include <iostream>
#include <vector>
#include <string>

int main{
    typedef vector<int>::iterator iter;
    vector<int> List(3);
    List[0] = 100;
    List[1] = 101;
    List[0] = 102;
    iter p = List.begin();
    cout << *p; // Element 100
    ++p;
    cout << *p; // Element 101
    --p;
    cout << *p; // Element 100
}