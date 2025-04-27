#pragma once
#include <iostream>
#include "Student.h"
using namespace std;

class Undergraduate : public Student {
    char* fyp_name;
public:
    Undergraduate(const char* fn, float c, const char* f, const char* l, int a) : Student(c, f, l, a) {
        fyp_name = new char[strlen(fn) + 1];
        strcpy_s(fyp_name, strlen(fn) + 1, fn);
        cout << "Undergraduate() called" << endl;
    }
    Undergraduate() : Student(), fyp_name(nullptr) {
        cout << "Undergraduate() called" << endl;
    }
    ~Undergraduate() {
        delete[] fyp_name;
        cout << "~Undergraduate() called" << endl;
    }

    void setFYP(const char* fn) {
        delete[] fyp_name;
        fyp_name = new char[strlen(fn) + 1];
        strcpy_s(fyp_name, strlen(fn) + 1, fn);
    }
    char* getFYP() { 
        return fyp_name; 
    }

    void printUndergraduate()
    {
        printStudent();
		cout << getFirstName() << " " << getLastName() << " is an undergraduate student, his cgpa is " << getCGPA() << " and his final year project is titled " << fyp_name << endl;
    }
   
};
