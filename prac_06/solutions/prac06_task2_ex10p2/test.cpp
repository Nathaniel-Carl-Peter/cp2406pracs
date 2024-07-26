// import hr;
#include "hr.h"

using namespace std;

int main()
{
	HR::Person person{ "Name", "LastName" };
	HR::Employee employee{ 100, "Otis", "Lowe" };
	HR::Manager m{ 101, "AOtis", "BLowe" };
	HR::Director d{ 102, "COtis", "DLowe" };

	cout << person.toString() << endl;
	cout << employee.toString() << endl;
	cout << m.toString() << endl;
	cout << d.toString() << endl;

	
}
