
#include <iostream>

// Question? You do not need to #include <string>. Why?
using namespace std;


int main()
{
	cout << "Please input string 1: " ; 	
	string userInput;
	getline(cin, userInput);
	cout << "Your input: " << userInput << endl; 	

	cout << "Please input string 2: " ; 	
	string userInput2;
	getline(cin, userInput2);
	cout << "Your input : " << userInput2 << endl; 	

	cout << "Sorted result:" << endl;
	if (userInput < userInput2) {
		cout << userInput << endl << userInput2 << endl;
	}
	else {
		cout << userInput2 << endl << userInput << endl;
	}
	cout << "DONE!" << endl;

}
