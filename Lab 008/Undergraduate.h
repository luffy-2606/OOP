#pragma-once
#include<iostream>
using namespace std;

class Undergraduate : public Student{
	char* fyp_name;
public:
	Undergraduate(char* fn, float c, char* f, char* l, int a) : Student(c, f, l, a)
	{
		fyp_name = new char[strlen(fn) + 1];
		strcpy_s(fyp_name, strlen(fn), fn);
		cout << "Undergraduate() called";
	}
	Undergraduate() : Student()
	{
		fyp_name = 0;
		cout << "Undergraduate() called";
	}
	~Undergraduate()
	{
		fyp_name = 0;
		cout << "~Undergraduate() called";
	}

	void setFYP(char* fn)
	{
		fyp_name = new char[strlen(fn) + 1];
		strcpy_s(fyp_name, strlen(fn), fn);
	}
	char* getFYP()
	{
		return fyp_name;
	}
};