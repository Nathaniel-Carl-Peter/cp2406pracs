// export module person;

#include <iostream>
#include <string>
#include <format>
#include <compare>
#include <ostream>
using namespace std;

// export class Person
class Person
{
public:
	// Two-parameter constructor automatically creates initials and
	// delegates the work to the three-parameter constructor.
	Person(std::string firstName, std::string lastName)
		: Person{ std::move(firstName), std::move(lastName),
		// std::format("{}{}", firstName[0], lastName[0]) }
		firstName.substr(0,1) + lastName.substr(0,1)}
	{
		std::cout << "Two-parameter constructer called. Inititals: " << m_initials << std::endl;
	}

	Person() = default;

	Person(std::string firstName, std::string lastName, std::string initials)
		: m_firstName{ std::move(firstName) }
		, m_lastName{ std::move(lastName) }
		, m_initials{ std::move(initials) }
	{
	}

	const std::string& getFirstName() const { return m_firstName; }
	void setFirstName(std::string firstName) { m_firstName = std::move(firstName); }

	const std::string& getLastName() const { return m_lastName; }
	void setLastName(std::string lastName) { m_lastName = std::move(lastName); }

	const std::string& getInitials() const { return m_initials; }
	void setInitials(std::string initials) { m_initials = std::move(initials); }

	void output(std::ostream& output) const
	{
		// output << std::format("{} {} ({})",
		// getFirstName(), getLastName(), getInitials() << std::endl;
		std::cout << getFirstName() << getLastName() << "(" + getInitials() + ")" << std::endl;
	}

	// Only this single line of code is needed to add support
	// for all six comparison operators.
	// [[nodiscard]] auto operator<=>(const Person&) const = default;
	bool operator<(const Person &other) const {return (this < &other);}
	bool operator>(const Person &other) const {return (this > &other);}
	bool operator<=(const Person &other) const {return (this <= &other);}
	bool operator>=(const Person &other) const {return (this >= &other);}
	bool operator==(const Person &other) const {return (this == &other);}
	bool operator!=(const Person &other) const {return (this != &other);}
	
private:
	std::string m_firstName;
	std::string m_lastName;
	std::string m_initials;
};
