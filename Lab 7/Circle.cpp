#pragma once
#include <iostream>
#include "Point.h"
#include "Style.h"
using namespace std;

class Circle
{
	Point center;
	float radius;
	Style st;

public:
	Circle(int x = 0, int y = 0, float r = 0, char* cl = 0) : center(x, y), radius(r), st(cl, true)
	{
		cout << "Circle() called" << endl;
		if (cl == 0)
			st.SetFilled(false);
	}
	Circle(int x = 0, int y = 0, float r = 0, const char* cl = 0) : center(x, y), radius(r), st(cl, true)
	{
		cout << "Circle() called" << endl;
		if (cl == 0)
			st.SetFilled(false);
	}
	~Circle()
	{
		cout << "~Circle() called" << endl;
	}
	void print()
	{
		cout << "Center: ";
		center.print();
		cout << "Radius: " << radius << endl;
		st.print();
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


