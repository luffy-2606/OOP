#include <iostream>
using namespace std;


class Time{
	int hours; 
	int mins;
	int sec;
public:
	Time(int hours = 0, int mins = 0, int sec = 0)
	{
		this->hours = hours;
		this->mins = mins;
		this->sec = sec;
	}

	Time operator +(Time& obj)
	{
		int s=0, m=0, h=0;
		s = this->sec + obj.sec;
		while (s >= 60)
		{
			m++;
			s = s - 60;
		}
		m = m + this->mins + obj.mins;
		while (mins >= 60)
		{
			h++;
			mins = mins - 60;
		}
		h = h + this->hours + obj.hours;

		Time t1(h, m, s);
		return t1;
	}

	Time operator -(Time& obj)
	{
		int s = 0, m = 0, h = 0;

		if (this->sec - obj.sec < 0)
		{
			m--;
			s = 60 + this->sec - obj.sec;
		}
		else
			s = s + this->sec - obj.sec;

		if (m + this->mins - obj.mins < 0)
		{
			h--;
			m = 60 + this->mins - obj.mins;
		}
		else
			m = m + this->mins - obj.mins;

		if (h + this->hours - obj.hours < 0)
		{
			cout << "Subtraction not possible (Time can not be negative)\n";
			return 0;
		}
		else
			h = h + this->hours - obj.hours;
		
		Time t1(h, m, s);
		return t1;
	}

	void operator ++()
	{
		this->sec++;
		if (this->sec >= 60)
		{
			this->sec - 60;
			this->mins++;
		}
		if (this->mins >= 60)
		{
			this->mins - 60;
			this->hours++;
		}
	}
	void operator --()
	{
		if (this->hours == 0 && this->mins == 0 && this->sec == 0)
		{
			cout << "can not be decremented further";
		}
		else{
			this->sec--;
			if (this->sec < 0)
			{
				this->mins--;
				this->sec + 60;
			}
			if (this->mins < 0)
			{
				this->hours--;
				this->mins + 60;
			}
		}
	}

	bool operator ==(Time& obj)
	{
		if (obj.hours == hours && obj.mins == mins && obj.sec==sec)
			return true;
		return false;
	}
	bool operator !=(Time& obj)
	{
		if (obj.hours == hours && obj.mins == mins && obj.sec&&sec)
			return false;
		return true;
	}

	void print()
	{
		cout << hours << " " << mins << " " << sec << endl;
	}
};


int main()
{
	Time t1(10, 30, 00);
	Time t2(3, 35, 00);
	Time t22(3, 35, 00);
	Time t3;
	t3 = t1 + t2;
	t3.print();
	t3 = t1 - t2;
	t3.print();
	if (t1 == t2)
		cout << "t1 and t2 are same\n";
	else 
		cout << "t1 and t2 are not same\n";
	if (t1!=t2)
		cout << "t1 and t2 are not similar\n";
	else
		cout << "t1 and t2 are similar\n";

	cout << endl;
	if (t22 == t2)
		cout << "t22 and t2 are same\n";
	else
		cout << "t22 and t2 are not same\n";

	system("pause");
	return 0;
}
