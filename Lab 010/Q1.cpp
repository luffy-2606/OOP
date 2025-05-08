#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Person {
	string name;
	int age;
public:
	Person(string n = "", int a = 0) : name(n), age(a)
	{}

	void getPersonData(){
		cout << "Enter name: ";
		getline(cin, name);
		cout << "Enter age: ";
		cin >> age;
		cin.ignore();
	}

	void displayPersonData() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}
};

class Employee : public Person {
	int employeeID;
	string designation;

public:
	Employee(string n = "", int a = 0, int id = 0, string des = "") : employeeID(id), designation(des), Person(n, a)
	{}

	void getEmployeeData() {
		getPersonData();
		cout << "Enter Employee ID: ";
		cin >> employeeID;
		cin.ignore();
		cout << "Enter Designation: ";
		getline(cin, designation);
	}
	void displayEmployeeData()
	{
		displayPersonData();
		cout << "Employee ID: " << employeeID << endl;
		cout << "Designation: " << designation << endl;
	}
};

class Manager : public Employee, public Person
{
	string department;
public:
	Manager(string n = "", int a = 0, int id = 0, string des = "", string dep = "") : department(dep), Employee(n, a, id, des)
	{}
	void getManagerData() {
		getEmployeeData();
		cout << "Enter Department: ";
		getline(cin, department);
	}
	void displayManagerData() {
		displayEmployeeData();
		cout << "Department: " << department << endl;
	}
};

int main()
{
	Manager M1;
	M1.getManagerData();
	M1.displayManagerData();
	system("pause");
	return 0;
}
