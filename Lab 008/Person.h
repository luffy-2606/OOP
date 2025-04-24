#pragma-once
#include <iostream>
using namespace std;

class Person{
	char* First_Name;
	char* Last_Name;
protected: 
	int age;
public:
	Person(char* f, char* l, int a)
	{
		First_Name = new char[strlen(f)+1];
		strcpy_s(First_Name, strlen(f), f);
		Last_Name = new char[strlen(l) + 1];
		strcpy_s(Last_Name, strlen(l), l);
		age = a;
		cout << "Person() called";
	}
	Person()
	{
		age = 0;
		First_Name = 0;
		Last_Name = 0;
		cout << "Person() called";
	}
	~Person()
	{
		age = 0;
		First_Name = 0;
		Last_Name = 0;
		cout << "~Person() called";

	}

	void setFirstName(char* f)
	{
		First_Name = new char[strlen(f) + 1];
		strcpy_s(First_Name, strlen(f), f);
	}
	void setLastName(char* l)
	{
		Last_Name = new char[strlen(l) + 1];
		strcpy_s(Last_Name, strlen(l), l);
	}

	char* getFirstName()
	{
		return First_Name;
	}
	char* getLastName()
	{
		return Last_Name;
	}
};