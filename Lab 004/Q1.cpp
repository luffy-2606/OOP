#include <iostream>
using namespace std;

class StringInfo
{
	char* str;
	int length;

public:
	StringInfo(const char* s)
	{
		length = 0;
		for (int i = 0; s[i] != '\0'; i++)
			length++;

		str = new char[length + 1];
		for (int i = 0; s[i] != '\0'; i++)
			str[i] = s[i];
		str[length] = '\0';
	}

	~StringInfo()
	{
		delete[] str;
	}
	
	void display()
	{
		cout << "String: " << str << endl;
		cout << "Length: " << length << endl;
	}
	
};




int main()
{
	const char* s = "Skibidi Toilet";
	
	StringInfo s1(s);

	s1.display();

	system("pause");
	return 0;
}
