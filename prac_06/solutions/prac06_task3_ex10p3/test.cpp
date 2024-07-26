// import hr;
#include "hr.h"
#include <vector>
#include <memory>

using namespace std;

int main()
{
	HR::Person person{ "Name", "LastName" };
	HR::Employee employee{ 100, "Otis", "Lowe" };
	HR::Manager m{ 101, "AOtis", "BLowe" };
	HR::Director d{ 102, "COtis", "DLowe" };

	// cout << person.toString() << endl;
	// cout << employee.toString() << endl;
	// cout << m.toString() << endl;
	// cout << d.toString() << endl;

	vector<unique_ptr<HR::Person>> persons;
	persons.push_back(make_unique<HR::Employee>(123, "John", "Doe"));
	persons.push_back(make_unique<HR::Manager>(456, "Otis", "Lowe"));
	persons.push_back(make_unique<HR::Director>(46, "Fran", "Stone"));
	persons.push_back(make_unique<HR::Employee>(33, "Harper", "Jones"));

	cout << "------------------ vector<unique_ptr<HR::Person>> persons" << endl;
	for (const auto& person : persons) {
		cout << person->toString() << endl;
	}

	// WRONG!
	vector<HR::Person> staff2;
	staff2.push_back(person);
	staff2.push_back(employee);
	staff2.push_back(m);
	staff2.push_back(d);
	cout << "------------------ vector<HR::Person> staff" << endl;
	for (const HR::Person& person : staff2) {
		cout << person.toString() << endl;
	}

	// OK!
	vector<HR::Person*> staff;
	staff.push_back(&person);
	staff.push_back(&employee);
	staff.push_back(&m);
	staff.push_back(&d);
	cout << "------------------ vector<HR::Person*> staff" << endl;
	for (const HR::Person* person : staff) {
		cout << person->toString() << endl;
	}


}
