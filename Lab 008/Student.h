#pragma once
#include <iostream>
#include "Person.h"
using namespace std;

class Student : public Person {
    float cgpa;
public:
    Student(float c, const char* f, const char* l, int a) : Person(f, l, a), cgpa(c) {
        cout << "Student() called" << endl;
    }
    Student() : Person(), cgpa(0) {
        cout << "Student() called" << endl;
    }
    ~Student() {
        cout << "~Student() called" << endl;
    }

    void setCGPA(float c) { 
        cgpa = c; 
    }
    float getCGPA() { 
        return cgpa; 
    }
    void printStudent() {
        cout << getFirstName() << " " << getLastName() << " is " << age << " years old, his cgpa is " << cgpa << endl;
    }


};
