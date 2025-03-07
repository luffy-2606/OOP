#include <iostream>
using namespace std;

class StringHolder
{
	char* string_ptr;

public:
	//deep copy constructor
	StringHolder(const char* s)
	{
		int len = 0;
		for (int i = 0; s[i] != 0; i++)
			len++;
		string_ptr = new char[len+1];
		for (int i = 0; s[i] != 0; i++)
			string_ptr[i] = s[i];
		string_ptr[len] = 0;
	}

	//shallown copy constructor
	StringHolder(const char* s, bool flag)
	{
		string_ptr = (char*)s;
	}

	~StringHolder()
	{
		delete[] string_ptr;
	}

	void setString(char* str)
	{
		string_ptr = str;
	}

	void display()
	{
		cout << "String is: " << string_ptr << endl;
	}
};

int main()
{
	const char* Q1 = "Meow Meow";
	StringHolder s1(Q1);
	s1.display();

	const char* Q2 = "Sigma Boy";
	StringHolder s2(Q2, true);
	s2.display();

	char Q3[20] = "ahhhhh";
	s2.setString(Q3);
	s2.display();


	system("pause");
	return 0;
}
