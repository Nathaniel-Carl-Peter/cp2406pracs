#pragma once
// export module manager;

// import employee;
#include "Employee.h"
// export namespace HR
#include <iostream>

namespace HR
{
	class Manager : public Employee
	{
	public:
		// Explicitly inherit Employee's constructors.
		using Employee::Employee;
	};
}
