#pragma once
#include <iostream>
#include "Student.h"
using namespace std;

class Graduate : public Student {
    char* thesis_topic;
public:
    Graduate(const char* tp, float c, const char* f, const char* l, int a) : Student(c, f, l, a) {
        thesis_topic = new char[strlen(tp) + 1];
        strcpy_s(thesis_topic, strlen(tp) + 1, tp);
        cout << "Graduate() called" << endl;
    }
    Graduate() : Student(), thesis_topic(nullptr) {
        cout << "Graduate() called" << endl;
    }
    ~Graduate() {
        delete[] thesis_topic;
        cout << "~Graduate() called" << endl;
    }

    void setThesis(const char* tp) {
        delete[] thesis_topic;
        thesis_topic = new char[strlen(tp) + 1];
        strcpy_s(thesis_topic, strlen(tp) + 1, tp);
    }
    char* getThesis() { 
        return thesis_topic; 
    }

    void printGraduate()
    {
		cout << getFirstName() << " " << getLastName() << " is a graduate student, his cgpa is " << getCGPA() << " and his thesis topic is " << thesis_topic << endl;
    }
};
