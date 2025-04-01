#include <iostream>
using namespace std;

class Distance{
	int dist;
public:
	Distance(int dist = 0)
	{
		this->dist = dist;
	}

	bool operator <(Distance& obj)
	{
		if (this->dist < obj.dist)
			return true;
		return false;
	}

	bool operator >(Distance& obj)
	{
		if (this->dist > obj.dist)
			return true;
		return false;
	}

	bool operator <=(Distance& obj)
	{
		if (this->dist <= obj.dist)
			return true;
		return false;
	}

	bool operator >=(Distance& obj)
	{
		if (this->dist >= obj.dist)
			return true;
		return false;
	}

	void operator +=(int m)
	{
		this->dist = this->dist + m;
	}

	void operator -=(int m)
	{
		this->dist = this->dist - m;
	}

	void print()
	{
		cout << this->dist << endl;
	}
};

int main()
{
	Distance d1(100);
	Distance d2(200);
	Distance d3(100);

	if (d1 > d2)
		cout << "d1 is greater than d2\n";
	else 
		cout << "d1 is lesser than d2\n";
	cout << endl;

	if (d1 < d2)
		cout << "d2 is larger than d1\n";
	else
		cout << "d2 is smaller than d1\n";
	cout << endl;

	if (d1 >= d2)
		cout << "d1 is greater than equal to d2\n";
	else
		cout << "d1 is lesser than d2\n";
	cout << endl;

	if (d3 <= d2)
		cout << "d2 is larger than equal to d3\n";
	else
		cout << "d2 is smaller than equal to d3\n";
	cout << endl;

	d3 += 100;
	d3.print();

	system("pause");
	return 0;
}
