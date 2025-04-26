#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Faculty.h"
#include "Graduate.h"
#include "Undergraduate.h"
using namespace std;

int main() {
    Undergraduate UGS1("Ted Thompson", 3.91,"Ted","Thompson", 22);
    Faculty F1(2, "420", "Richard", "Karp", 45);

    //-------Output:-------
    /*Person() called
    Student() called
    Undergraduate() called
    Person() called
    Faculty() called
    ~Faculty() called
    ~Person() called
    ~Undergraduate() called
    ~Student() called
    ~Person() called*/
    //-------------------


    //Exercise 6:
	//1. Because "age" can be accessed directly in the derived classes, without the need for setter/getter methods
    //2. The error occurs because the First_Name and Last_Name attributes in the Person class are private, and cannot be directly accessed by the derived classes


	UGS1.printInformation();
	UGS1.printStudent();
	F1.printFaculty();

    cout << "===========" << endl;

    Undergraduate u("The Event Locator", 3.91, "Ted", "Thompson", 22);
    Graduate g("Distributed Algorithms", 3.01, "Arnold", "Gates", 25);

    u.printUndergraduate();
    g.printGraduate();

    u.printStudent();

    //Exercise 9:
	//Protected: I am unable to use the printStudent() method in the main function because the Undergraduate class can only use the functions of "Student" in its class, not elsewhere. Due to using protected inheritance.
	//Private: I am unable to use the printStudent() method in the main function because the Undergraduate class can only use the functions of "Student" in its class, not elsewhere. Due to using private inheritance.
    return 0;
}
