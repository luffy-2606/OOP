#pragma-once
#include<iostream>
using namespace std;

class Graduate : public Student{
	char*  thesis_topic;
public:
	Graduate(char* tp, float c, char* f, char* l, int a) : Student(c, f, l, a)
	{
		thesis_topic = new char[strlen(tp) + 1];
		strcpy_s(thesis_topic, strlen(tp), tp);
		cout << "Graduate() called";
	}
	Graduate() : Student()
	{
		thesis_topic = 0;
		cout << "Graduate() called";
	}
	~Graduate()
	{
		thesis_topic = 0;
		cout << "~Graduate() called";
	}

	void setThesis(char* tp)
	{
		thesis_topic = new char[strlen(tp) + 1];
		strcpy_s(thesis_topic, strlen(tp), tp);
	}
	char*  getThesis()
	{
		return thesis_topic;
	}
};