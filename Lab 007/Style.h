#pragma once
#include <iostream>
#include <cstring> 
using namespace std;

class Style {
	char color[10];
	bool isFilled;
public:
	void SetFilled(bool filled) {
		isFilled = filled;
	}

	void SetColor(const char* c) {
		strcpy_s(color, sizeof(color), c);
		color[sizeof(color) - 1] = '\0'; // Ensure null-termination
	}

	Style(const char* c = "", bool filled = false) {
		strcpy_s(color, sizeof(color), c);
		color[sizeof(color) - 1] = '\0'; // Ensure null-termination
		isFilled = filled;
		cout << "Style() called\n";
	}

	Style(const Style& obj) {
		strcpy_s(color, sizeof(color), obj.color);
		color[sizeof(color) - 1] = '\0'; // Ensure null-termination
		isFilled = obj.isFilled;
		cout << "Style() called\n";
	}

	~Style() {
		cout << "~Style() called\n";
	}

	void print() {
		cout << "Color: " << color << endl;
		cout << "Filled: " << (isFilled ? "True" : "False") << endl;
	}
};
