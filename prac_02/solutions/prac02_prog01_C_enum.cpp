
// import <iostream>;
#include <iostream>

// import <format>;

// import employee;

using namespace std;


// export module employee;

// export struct Employee {
namespace HR {

	enum class Title {
		Engineer,
		SeniorEngineer,
		Manager
	};

	struct Employee {
		char firstInitial;
		char lastInitial;
		int  employeeNumber;
		int  salary;
		Title title;
	};
}

void print_title(HR::Title t);


int main()
{
	// create and populate an employee
	HR::Employee anEmployee;
	anEmployee.firstInitial = 'J';
	anEmployee.lastInitial = 'D';
	anEmployee.employeeNumber = 42;
	anEmployee.salary = 80000;
	anEmployee.title = HR::Title::Manager;

	// output the values of an employee
	// cout << format("Employee: {}{}", anEmployee.firstInitial, 
	// 	anEmployee.lastInitial) << endl;
	
    cout << "Employee: " << anEmployee.firstInitial << 
		anEmployee.lastInitial << endl;
	

    // cout << format("Number: {}", anEmployee.employeeNumber) << endl;
    cout << "Number: " << anEmployee.employeeNumber << endl;
	
    // cout << format("Salary: ${}", anEmployee.salary) << endl;
    cout << "Salary: $" << anEmployee.salary << endl;

	// cout << "Title: " << anEmployee.title << endl;
	print_title(anEmployee.title);

}

void print_title(HR::Title t) {
	switch (t) {
	using namespace HR;
	case Title::Engineer:
		cout << "Engineer" << endl;
		break;
	case Title::SeniorEngineer:
		cout << "SeniorEngineer" << endl;
		break;
	case Title::Manager:
		cout << "Manager" << endl;
		break;
	}
}
