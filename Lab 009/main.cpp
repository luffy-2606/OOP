#include <iostream>
using namespace std;

class Animal {

public:
	virtual const char* speak()
	{
		return "speak() called.";
	}
	virtual ~Animal() { cout << "~Animal() called." << endl; }
};

class Dog : public Animal {

public:
	const char* speak() {
		return "woof!";
	}
	~Dog() { cout << "~Cat() called." << endl; }
};

class Cat : public Animal{

public:
	const char* speak() {
		return "mew!";   
	}
	~Cat() { cout << "~Cat() called." << endl; }
};

class Sheep : public Animal {

public:
	const char* speak() {
		return "bleat!";
	}
	~Sheep() { cout << "~Sheep() called." << endl; }
};

class Cow : public Animal {

public:
	const char* speak() {
		return "moo!";
	}
	~Cow() { cout << "~Cow() called." << endl; }
};

class Horse : public Animal {

public:
	const char* speak() {
		return "neigh!";
	}
	~Horse() { cout << "~Horse() called." << endl; }
};

char getch()
{
	int ans;
	cin >> ans;
	if (ans == 1)
		return '1';
	else if (ans == 2)
		return '2';
	else if (ans == 3)
		return '3';
	else if (ans == 4)
		return '4';
	else if (ans == 5)
		return '5';
	return -1;
}

int main()
{
	const int size = 5;
	Animal* myPets[size];

	int i = 0;
	while (i < size)
	{
		cout << "Press 1 for a Dog, 2 for a Cat, 3 for a Sheep, 4 for a Cow, and 5 for a Horse." << endl;
		switch (getch())
		{
		case '1':
			myPets[i] = new Dog;
			cout << "Dog added at position " << i << endl << endl; i++;
			break;
		case '2':
			myPets[i] = new Cat;
			cout << "Cat added at position " << i << endl << endl; i++;
			break;
		case '3':
			myPets[i] = new Sheep;
			cout << "Sheep added at position " << i << endl << endl; i++;
			break;
		case '4':
			myPets[i] = new Cow;
			cout << "Cow added at position " << i << endl << endl; i++;
			break;
		case '5':
			myPets[i] = new Horse;
			cout << "Horse added at position " << i << endl << endl; i++;
			break;
		default:
			cout << "Invalid input. Enter again." << endl << endl;
			break;
		}
	}

	for (int i = 0; i < size; i++)
	{
		cout << myPets[i]->speak() << endl;
		delete[] myPets[i];
	}

}
