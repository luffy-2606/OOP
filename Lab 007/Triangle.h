#pragma once
#include <iostream>
#include "Point.h"
#include "Style.h"
using namespace std;

class Triangle {
	Point x, y, z;
	Style st; // Add Style object
public:
	Triangle(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0, int x3 = 0, int y3 = 0, char* cl = 0)
		: x(x1, y1), y(x2, y2), z(x3, y3), st(cl, true)
	{
		cout << "Triangle() called" << endl;
		if (cl == 0)
			st.SetFilled(false);
	}

	Triangle(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0, int x3 = 0, int y3 = 0, const char* cl = 0)
		: x(x1, y1), y(x2, y2), z(x3, y3), st(cl, true)
	{
		cout << "Triangle() called" << endl;
		if (cl == 0)
			st.SetFilled(false);
	}

	~Triangle()
	{
		cout << "~Triangle() called" << endl;
	}

	void print()
	{
		cout << "Point X: ";
		x.print();
		cout << "Point Y: ";
		y.print();
		cout << "Point Z: ";
		z.print();
		st.print(); // Print style
	}

	void SetStyle(Style& obj)
	{
		st = obj;
	}

	void SetColor(const char* cl)
	{
		st.SetColor(cl);
	}

	void SetFilled(bool filled)
	{
		st.SetFilled(filled);
	}
};
