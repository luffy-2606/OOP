#include <iostream>
#include <string>
using namespace std;

class Employee{
	string name;
	int ID;
	static int employeeCount;
public:
	Employee(string n, int ID)
	{
		this->name = n;
		this->ID = ID;
		employeeCount++;
	}

	static int getEmployeeCount()
	{
		return employeeCount;
	}

	void display()
	{
		cout << name << "(ID: " << ID << ")\n";
	}
};

int Employee::employeeCount = 0;

int main()
{
	Employee E1("Saaif", 100);
	E1.display();
	Employee E2("Ali", 101);
	E2.display();

	cout << "Total Employees: " << Employee::getEmployeeCount() << endl << endl;

	Employee E3("Afraz", 102);
	E3.display();

	cout << "Total Employees: " << Employee::getEmployeeCount() << endl << endl;

	system("pause");
	return 0;
}
