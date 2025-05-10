#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Student {
	int rollNo;
	string name;
public:
	void getStudentData() {
		cout << "Enter Name: ";
		getline(cin, name);
		cout << "Enter Roll Number: ";
		cin >> rollNo;
		cin.ignore();
	} 
	
	void displayStudentData(){
		cout << "Name: " << name << endl;
		cout << "Roll No: " << rollNo << endl;
	}
};

class Sports {
	int sportsScore;
public:
	void getSportsScore() {
		cout << "Enter Sports Score: ";
		cin >> sportsScore;
	} 
	void displaySportsScore() {
		cout << "Sports Score: " << sportsScore << endl;
	}
};

class Result: virtual Student, virtual Sports {
	int academicScore;
public:
	void getResultData() {
		getStudentData();    
		getSportsScore();    
		cout << "Enter Academic Score: ";
		cin >> academicScore;
	}
	void displayResult()
	{
		displayStudentData();
		displaySportsScore();
		cout << "Academic Score: " << academicScore<<endl;
	}
};

int main()
{
	Result r;
	cout << "Enter student details:\n";
	r.getResultData();

	cout << "\nStudent Result:\n";
	r.displayResult();

	return 0;
}
