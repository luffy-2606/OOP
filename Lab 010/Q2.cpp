#include <iostream>
#include <string>
#include <cstring>
using namespace std;	

class Shape {

public:
	virtual float area() = 0;
};

class Circle : public Shape {
	float radius;
public:
	Circle(int r): radius (r){}
	float area()
	{
		return 3.14 * radius * radius;
	}
};

class Rectangle : public Shape {
	float length;
	float width;
public:
	Rectangle(float l, float w): length(l), width(w){}
	float area()
	{
		return length * width;
	}
};


int main()
{
	Shape* s;
	Circle c(5.0);
	s = &c;
	cout<<"Area of Circle: " << s->area() << endl; // Should print area of circle

	Rectangle r(4.0, 6.0);
	s = &r;
	cout << "Area of Rectangle: " << s->area() << endl; // Should print area of rectangle


	return 0;
}
