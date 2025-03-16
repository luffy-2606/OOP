#include <iostream>
#include <string>
using namespace std;


class Student{
	string name;
	int rollNumber;
	float CGPA;

public:
	Student()
	{
		name = "";
		rollNumber = 0;
		CGPA = 0;
	}

	Student(string n, int rn, float gp) : name(n), rollNumber(rn), CGPA(gp){}

	void display()
	{
		cout << "Name: " << name <<" | Roll Number: "<<rollNumber<<" | CGPA: "<<CGPA<<endl;
	}
};

int main()
{
	int size = 3;
	Student* ptr = new Student[size];


	string n;
	int roll;
	float gp;

	for (int i = 0; i < size; i++)
	{
		cin.ignore();
		cout << "Enter name for Student No#" << i + 1 << ": ";
		//cin.getline(n, 100);
		cin >> n;
		cout << "Enter Roll Number for Student No#" << i + 1 << ": ";
		cin >> roll;
		cout << "Enter CGPA for Student No#" << i + 1 << ": ";
		cin >> gp;

		ptr[i] = Student(n, roll, gp);
		cout << endl;
	}

	for (int i = 0; i < size; i++)
	{
		cout << "Information for Student No#" << i + 1 << ": \n";
		ptr[i].display();
		cout << endl;
	}
	
	system("pause");
	return 0;
}
