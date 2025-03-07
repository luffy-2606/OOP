#include <iostream>
using namespace std;

class Student
{
	char name[50];
	int age;

public:
	void setName(char* n)
	{
		for (int i = 0; n[i] != '\0'; i++)
			name[i] = n[i];
		name[strlen(n)] = '\0';
	}
	void setAge(int a)
	{
		age = a;
	}

	char* getName()
	{
		return name;
	}
	int getAge()
	{
		return age;
	}
};

int main()
{
	int num;
	do {
		cout << "Enter the number of students: ";
		cin >> num;
		if (num < 1)
			cout << "Number of students should be greater than or equal to 1" << endl;
	} while (num < 1);
	
	Student* students_arr = new Student[num];

	char s1[50] = "";
	for (int i = 0; i < num; i++)
	{
		cout << "Enter name for student#" << i+1 << ": ";
		char* s = s1;
		cin.ignore();
		cin.getline(s, 50);
		students_arr[i].setName(s);

		int age;
		do {
			cout << "Enter the age for student#" << i+1 << ": ";
			cin >> age;
			if (age < 1)
				cout << "Age has to be greater than or equal to 1\n";
		} while (age < 1);
		students_arr[i].setAge(age);
	}
	cout << endl << endl;

	for (int i = 0; i < num; i++)
	{
		cout << "Student#" << i+1 << "\nName: " << students_arr[i].getName() << ", Age: " << students_arr[i].getAge()<<endl;
	}


	system("pause");
	return 0;
}
