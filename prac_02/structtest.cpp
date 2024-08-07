// import <iostream>;
// import <format>;
// import employee;

#include <iostream>
#include <format>
#include employee;

// convert C++ 20 to 17

using namespace std;

int main()
{
	// create and populate an employee
	Employee anEmployee;
	anEmployee.firstInitial = 'J';
	anEmployee.lastInitial = 'D';
	anEmployee.employeeNumber = 42;
	anEmployee.salary = 80000;

	// output the values of an employee
	cout << format("Employee: {}{}", anEmployee.firstInitial, 
		anEmployee.lastInitial) << endl;
	cout << format("Number: {}", anEmployee.employeeNumber) << endl;
	cout << format("Salary: ${}", anEmployee.salary) << endl;
}
