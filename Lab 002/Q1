#include <iostream>
using namespace std;

void getTrgVal(int &num)
{
	cout << endl <<"Enter the target value: ";
	cin >> num;
}

void removeLongSeq(int arr[],int size, int num)
{
	int count = 0;
	int index = -1;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == num)
		{
			int Tempindex = i;
			int Tempcount = 0;
			for (int x = i; x < size && arr[i] == num; x++)
			{
				Tempcount++;
			}
			if (Tempcount > count)
			{
				count = Tempcount;
				index = Tempindex;
			}
		}
	}
	for (int k = index; k != -1 && k < size && arr[k] == num; k++)
	{
		arr[k] = -1;
	}
}



int main()
{
	int arr[10];
	const int size = 18;

	for (int i = 0; i < size; i++)
	{
		cout << "Enter value for index#" << i << ": ";
		cin >> arr[i];
	}

	int num = -1;
	getTrgVal(num);


	cout << "\nBefore: ";
	for (int i = 0; i < size; i++)
		cout << arr[i]<<" ";

	removeLongSeq(arr, size, num);

	cout << "\nAfter: ";
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl << endl;
	system("pause");
	return 0;
}
