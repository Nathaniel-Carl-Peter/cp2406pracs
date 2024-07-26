#pragma once

// export module manager;

// import employee;
#include "Employee.h"
#include <iostream>

// export namespace HR
namespace HR
{
	class Manager : public Employee
	{
	public:
		// Explicitly inherit Employee's constructors.
		using Employee::Employee;

		// std::string toString() const
		std::string toString() const override
		{
			// return std::format("Manager is {}", Employee::toString());
			return "Manager is " + Employee::toString();
		}

	};
}
