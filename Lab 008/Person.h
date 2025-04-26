#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Person {
    char* First_Name;
    char* Last_Name;
protected:
    int age;
public:
    Person(const char* f, const char* l, int a) {
        First_Name = new char[strlen(f) + 1];
        strcpy_s(First_Name, strlen(f) + 1, f);
        Last_Name = new char[strlen(l) + 1];
        strcpy_s(Last_Name, strlen(l) + 1, l);
        age = a;
        cout << "Person() called" << endl;
    }
    Person() : First_Name(nullptr), Last_Name(nullptr), age(0) {
        cout << "Person() called" << endl;
    }
    ~Person() {
        delete[] First_Name;
        delete[] Last_Name;
        cout << "~Person() called" << endl;
    }

    void setFirstName(const char* f) {
        delete[] First_Name;
        First_Name = new char[strlen(f) + 1];
        strcpy_s(First_Name, strlen(f) + 1, f);
    }
    void setLastName(const char* l) {
        delete[] Last_Name;
        Last_Name = new char[strlen(l) + 1];
        strcpy_s(Last_Name, strlen(l) + 1, l);
    }

    char* getFirstName() { 
        return First_Name; 
    }
    char* getLastName() { 
        return Last_Name; 
    }

    void printInformation()
    {
        cout << First_Name << " " << Last_Name <<" is " << age << " years old"<<endl;
    }
    
};
