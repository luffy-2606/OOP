#pragma-once
#include<iostream>
using namespace std;

class Student : public Person{
	float cgpa;
public:
	Student(float c, char* f, char* l, int a) :Person(f, l, a)
	{
		cgpa = c;
		cout << "Student() called";
	}
	Student() :Person()
	{
		cout << "Student() called";
		cgpa = 0;
	}
	~Student()
	{
		cout << "~Student() called";
	}

	void setCGPA(float c)
	{
		cgpa = c;
	}
	float getCGPA()
	{
		return cgpa;
	}
};