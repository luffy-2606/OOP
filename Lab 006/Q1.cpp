#include <iostream>
using namespace std;

class ComplexNumber{
	int real;
	int imag;
public:
	ComplexNumber(int real = 0, int imag = 0)
	{
		this->real = real;
		this->imag = imag;
	}
	ComplexNumber(ComplexNumber& obj)
	{
		this->real = obj.real;
		this->imag = obj.imag;
	}

	ComplexNumber& operator +(ComplexNumber& obj)
	{
		ComplexNumber c1(this->real + obj.real, this->imag + obj.imag);
		return c1;
	}

	ComplexNumber& operator -(ComplexNumber& obj)
	{
		ComplexNumber c1(this->real - obj.real, this->imag - obj.imag);
		return c1;
	}

	ComplexNumber& operator *(ComplexNumber& obj)
	{
		ComplexNumber c1(this->real * obj.real + this->imag*obj.imag * -1, this->real * obj.imag + this->imag*obj.real);
		return c1;
	}

	friend ostream& operator <<(ostream& out, ComplexNumber& obj);
	friend istream& operator >>(istream& in, ComplexNumber& obj);
};

ostream& operator <<(ostream& out, ComplexNumber& obj)
{
	out << "(" << obj.real << "," << obj.imag << ")";
	return out;
}

istream& operator >>(istream& in, ComplexNumber& obj)
{
	cout << "Enter the Real Part: ";
	in >> obj.real;
	cout << "Enter the Imaginary Part: ";
	in >> obj.imag;

	return in;
}


int main()
{
	ComplexNumber c1(2, 3);
	ComplexNumber c2(1, 1);
	ComplexNumber c3;

	c3 = c1 + c2;
	cout << c3 << endl;

	c3 = c1 - c2;
	cout << c3 << endl;

	c3 = c1 * c2;
	cout << c3 << endl;

	ComplexNumber c4;
	cin >> c4;
	cout << c4 << endl;

	system("pause");
	return 0;
}
