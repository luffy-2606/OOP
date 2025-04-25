#pragma once
#include <iostream>
#include "Person.h"
using namespace std;

class Faculty : public Person {
    int course_count;
    char* tel;
public:
    Faculty(int cc, const char* t, const char* f, const char* l, int a) : Person(f, l, a), course_count(cc) {
        if (strlen(t) == 3) {
            tel = new char[4];
            strcpy_s(tel, 4, t);
        }
        else {
            tel = nullptr;
            cout << "Incorrect telephone extension number" << endl;
        }
        cout << "Faculty() called" << endl;
    }
    Faculty() : Person(), course_count(0) {
        tel = new char[4];
        strcpy_s(tel, 4, "000");
        cout << "Faculty() called" << endl;
    }
    ~Faculty() {
        delete[] tel;
        cout << "~Faculty() called" << endl;
    }

    void setCourseCount(int cc) { 
        course_count = cc; 
    }
    void setTelNum(const char* t) {
        delete[] tel;
        tel = new char[4];
        strcpy_s(tel, 4, t);
    }

    int getCourseCount() { 
        return course_count; 
    }
    char* getTelNum() { 
        return tel; 
    }

    void printFaculty()
    {
		cout << "Faculty Member name: " << getFirstName() << " " << getLastName() << ", Age: " << age << ", Number of courses: " << course_count << ", Ext. " << tel << endl;
    }
};
