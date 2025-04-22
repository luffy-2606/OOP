#pragma once
#include <iostream>
using namespace std;

class Point
{
	int x, y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y)
	{
		cout << "Point() called" << endl;
	}

	~Point()
	{
		cout << "~Point() called" << endl;
	}

	void print()
	{
		cout << "Point(" << x << ", " << y << ")" << endl;
	}

};


