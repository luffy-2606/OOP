#pragma-once
#include<iostream>
using namespace std;

class Faculty : public Person{
	int course_count;
	char* tel;
public:
	Faculty(int cc, char* t, char* f, char* l, int a) : Person(f, l, a)
	{
		if (strlen(t) == 3){
			tel = new char[4];
			for (int i = 0; i < 3; i++)
				tel[i] = t[i];
			tel[3] = 0;
			course_count = cc;
		}
		else{
			cout << "incorrect telephone extension number" << endl;
		}
		cout << "Faculty() called";
	}
	Faculty() : Person()
	{
		course_count = 0;
		tel = new char[4];
		for (int i = 0; i < 3; i++)
			tel[i] = '0';
		tel[3] = 0;
		cout << "Faculty() called";
	}
	~Faculty()
	{
		delete[] tel;
		cout << "~Faculty() called";
	}

	void setCourseCount(int cc)
	{
		course_count = cc;
	}
	void setTelNum(char* t)
	{
		for (int i = 0; i < 3; i++)
			tel[i] = '0';
		tel[3] = 0;
	}

	int getCourseCount()
	{
		return course_count;
	}
	char* getTelNum()
	{
		return tel;
	}
};