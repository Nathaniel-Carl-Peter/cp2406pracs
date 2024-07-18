// import <iostream>;
// import <format>;
// import employee;

#include <iostream>
#include <format>
// #include "employee.cppm"

// convert C++ 20 to 17

using namespace std;


namespace HR{

	enum class Title{
		Engineer,
		SeniorEngineer,
		Manager
	};
	
	struct Employee {

		char firstInitial;
		char lastInitial;
		int  employeeNumber;
		int  salary;
		Title title
	};
}

int main()
{
	// create and populate an employee
	HR::Employee anEmployee;
	anEmployee.firstInitial = 'J';
	anEmployee.lastInitial = 'D';
	anEmployee.employeeNumber = 42;
	anEmployee.salary = 80000;
    anEmployee.title = HR::Title:: Manager;

    	// output the values of an employee

	// C++ 20
	// cout << format("Employee: {}{}", anEmployee.firstInitial, 
	// 	anEmployee.lastInitial) << endl;
	// cout << format("Number: {}", anEmployee.employeeNumber) << endl;
	// cout << format("Salary: ${}", anEmployee.salary) << endl;

	//C++ 17
	cout << "Employee: " << anEmployee.firstInitial << anEmployee.lastInitial << endl;
	cout << "Number: " << anEmployee.employeeNumber << endl;
	cout << "Salary: $" << anEmployee.salary << endl;
    cout << anEmployee.title << endl;

}

void print_title()
{

}