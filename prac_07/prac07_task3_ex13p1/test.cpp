// import person;
// import <iostream>;
// import <format>;

#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	Person person { "John", "Doe" };
	// cout << format("The initials of {} {} are {}.",
	// 	person.getFirstName(), person.getLastName(), person.getInitials()) << endl;
	cout << "Intials of "<<person.getFirstName() << person.getLastName() << "=" << person.getInitials();

	Person person2 { "Marc", "Gregoire", "Mg" };
	// cout << format("The initials of {} {} are {}.",
		cout << "Intials of "<<person2.getFirstName() << person2.getLastName() << "=" << person2.getInitials();

	Person persons[3];

	// Test copy constructor.
	Person copy { person };

	// Test assignment operator.
	Person otherPerson { "Jane", "Doe" };
	copy = otherPerson;

	

	// Test comparison operators.
	// if (person < person2) { cout << "person < person2" << endl; }
	// if (person > person2) { cout << "person > person2" << endl; }
	// if (person <= person2) { cout << "person <= person2" << endl; }
	// if (person >= person2) { cout << "person >= person2" << endl; }
	// if (person == person2) { cout << "person == person2" << endl; }
	// if (person != person2) { cout << "person != person2" << endl; }
}
