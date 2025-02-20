#include <iostream>
using namespace std;

void reverseSTR(char arr[], int size)
{
	for (int i = 0; i < size / 2; i++)
	{
		char temp = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = temp;
	}
}

int main()
{
	const int size = 11;
	char arr[size];

	for (int i = 0; i < size - 1; i++)
	{
		cout << "Enter value for index# " << i << ": ";
		cin >> arr[i];
	}
	arr[size - 1] = 0;

	cout << "\nBefore: ";
	for (int i = 0; i < size; i++)
		cout << arr[i]<<" ";
	
	reverseSTR(arr, size);
	
	cout << "\nAfter: ";
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl << endl;

	system("pause");
	return 0;
}
