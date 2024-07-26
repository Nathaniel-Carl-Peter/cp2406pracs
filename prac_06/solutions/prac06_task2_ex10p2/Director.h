#pragma once

// export module director;

// import employee;
#include "Employee.h"
#include <iostream>

// export namespace HR
namespace HR
{
	class Director : public Employee
	{
	public:
		// Explicitly inherit Employee's constructors.
		using Employee::Employee;

		// std::string toString() const 
		std::string toString() const override
		{
			// return std::format("Director is {}", Employee::toString());
			return "Director is " + Employee::toString();
		}

	};
}
