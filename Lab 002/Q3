#include <iostream>
using namespace std;

bool isPalindrome(char arr[], int size)
{
	for (int i = 0; i < size / 2; i++)
	{
		if (arr[i] != arr[size - i - 1])
			return false;
	}
	return true;
}

int main()
{
	const int size = 11;
	char arr[size];

	cout << "Enter the string: ";
	cin >> arr;

	if (isPalindrome(arr, size))
		cout << "\nIt is a palindrome";
	else
		cout << "\nIt is not a palindrome";

	system("pause");
	return 0;
}
