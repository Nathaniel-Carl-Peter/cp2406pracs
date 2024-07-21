#include <iostream>
// import <string>
// import <format>;
// import <vector>
#include <vector>

using namespace std;  // BUG missing ;

int main()  //bug extra ;
{
	// A vector to store all values.
	vector<double> values;

	// Ask the user to enter values until 0 is entered.
	cout << "Input values, one at a time followed by Enter:" << endl;
	while (true) {  // BUG extra ;
		double value;
		cin >> value;
		if (value == 0.0) {  // BUG "=" and extra ;
			break;
		}  // BUG extra ; nut no effect
		values.push_back(value);
	}   //BUG extra ;

	// Format the values in a table with a couple of columns.
	for (auto value : values) {  // BUG extra ;
		// cout << format("{0:16e} | {0:12f} | {0:<12g} | {0:#>+12g}", value) << endl;
		cout << value << endl;
	}
}
