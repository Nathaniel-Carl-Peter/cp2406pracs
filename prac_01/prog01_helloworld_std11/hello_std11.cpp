// This is a hello world program
// C++ 17

#include <iostream>
#include <vector>
#include <string>
// import library first

using namespace std;

// int main() is where the whole program begins
int main()
{
    // For making a var
    // give a var type followed by var name
    // datatype varname {"Hello World"}
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    // data is constant
    for (const string& word : msg)
    {
        // cout = python's print()
        cout << word << " ";
    }
    cout << endl;
}