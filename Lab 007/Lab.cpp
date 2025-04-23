#include <iostream>
#include "Point.h"
#include "Circle.h"
#include "Triangle.h"
using namespace std;

int main() // Changed return type to int
{
	// Test Circle
	Circle c(3, 4, 2.5, "Red");
	c.SetFilled(true);
	c.SetColor("Blue");
	c.print();

	cout << endl;

	// Test Triangle
	Triangle t(1, 2, 3, 4, 5, 6, "Green");
	t.SetFilled(false);
	t.SetColor("Yellow");
	t.print();

	return 0; // Added return statement
}




//----Output:-----
//Point() called
//Circle() called
//Center : Point(3, 4)
//Radius : 2.5
//~Circle() called
//~Point() called