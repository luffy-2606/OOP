#include <iostream>
using namespace std;

class Date
{
	int Day, Month, Year;

public:
	Date()
	{
		Day = 1;
		Month = 1;
		Year = 1926;
		cout << "Default Constructor Called";
	}
	void print()
	{
		cout << endl << Day << "/" << Month << "/" << Year << endl;
	}
	Date(int d, int m, int y)
	{
		Day = d;
		Month = m;
		Year = y;
		cout << "Overloaded Function Called\n";
	}
	void Input()
	{
		int d, m, y;
		do{
			cout << "\nEnter the date: ";
			cin >> d;
		} while (d<1 || d>31);
		do{
			cout << "Enter the Month: ";
			cin >> m;
		} while (m<1 || m>12);
		do{
			cout << "Enter the year: ";
			cin >> y;
		} while (y<1900 || y>2025);

		Day = d;
		Month = m;
		Year = y;
	}
	//~Date()
	//{
	//	cout << "\nDestructor called\n";
	//}

	void setDay(int d)
	{
		Day = d;
	}
	void setMonth(int m)
	{
		Month = m;
	}
	void setYear(int y)
	{
		Year = y;
	}

	int getDay()
	{
		return Day;
	}
	int getMonth()
	{
		return Month;
	}
	int getYear()
	{
		return Year;
	}

	int Compare(Date date1)
	{
		int d1 = date1.getDay();
		int m1 = date1.getMonth();
		int y1 = date1.getYear();

		int d2 = this->Day;
		int m2 = this->Month;
		int y2 = this->Year;

		if (d1 == d2 && m1 == m2 && y1 == y2)
		{
			return 0;
		}
		else if (y1 > y2)
			return 1;
		else if (y1 < y2)
			return -1;
		else if (y1 == y2 && m1 > m2)
			return 1;
		else if (y1 == y2 && m1 < m2)
			return -1;
		else if (y1 == y2 && m1 == m2 && d1 > d2)
			return 1;
		else if (y1 == y2 && m1 == m2 && d1 < d2)
			return -1;
	}

	Date IncrementMonth()
	{
		int d1 = this->Day;
		int m1 = this->Month;
		int y1 = this->Year;

		m1++;
		if (m1>12)
		{
			m1 = 1;
			y1++;
		}
		Date temp(d1, m1, y1);
		return temp;
	}

	~Date()
	{
		cout << "Objet Deleted (";
		cout << "Day: " << this->Day<<", ";
		cout << "Month: " << this->Month << ", ";
		cout << "Year: " << this->Year << ")\n";
	}
};

	//int Compare(Date date1, Date date2)
	//{
	//	int d1 = date1.getDay();
	//	int m1 = date1.getMonth();
	//	int y1 = date1.getYear();
	//
	//	int d2 = date2.getDay();
	//	int m2 = date2.getMonth();
	//	int y2 = date2.getYear();
	//
	//	if (d1 == d2 && m1 == m2 && y1 == y2)
	//	{
	//		return 0;
	//	}
	//	else if (y1 > y2)
	//		return 1;
	//	else if (y1 < y2)
	//		return -1;
	//	else if (y1 == y2 && m1 > m2)
	//		return 1;
	//	else if (y1 == y2 && m1 < m2)
	//		return -1;
	//	else if (y1 == y2 && m1 == m2 && d1 > d2)
	//		return 1;
	//	else if (y1 == y2 && m1 == m2 && d1 < d2)
	//		return -1;
	//}

int main()
{
	Date date1;
	date1.print();

	Date independanceDay(14, 8, 1947);
	independanceDay.print();

	date1.Input();
	date1.print();

	Date xmasDay;
	xmasDay.print();

	xmasDay.setDay(25);
	xmasDay.setMonth(12);
	xmasDay.setYear(2018);
	xmasDay.print();

	int d, m, y;
	d = xmasDay.getDay();
	m = xmasDay.getMonth();
	y = xmasDay.getYear();

	cout << endl << d << "/" << m << "/" << y << endl;

	Date temp;
	temp = xmasDay;
	cout << "\n\nTemp Value: ";
	temp.print();

	Date d1(1, 1, 1900);
	Date d2(1, 1, 1900);
	Date d3(1, 2, 1900);

	if (d2.Compare(d1) == 0)
		cout << "d1 and d2 are equal\n";
	if (d3.Compare(d1) == 1)
		cout << "d1 bigger\n";
	if (d3.Compare(d1) == -1)
		cout << "d3 bigger\n";

	Date newDate = independanceDay.IncrementMonth();
	independanceDay.print();
	newDate.print();


	system("pause");
	return 0;
}
