#include<iostream>
using namespace std;

void getInput(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Enter value for index#" << i<<": ";
		cin >> arr[i];
	}
}

int findeqIndex(int A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int Left = 0, Right = 0;

		for (int x = 0; x < i; x++)
		{
			Left = Left + A[x];
		}

		for (int y = n - 1; y >i; y--)
		{
			Right = Right + A[y];

		}
		if (Left == Right)
			return i;
	}
	return -1;
}

int main()
{
	int arr[100] = { 0 };
	int size;
	do{
		cout << "Enter array size: ";
		cin >> size;
	} while (size <= 2);

	getInput(arr, size);
	
	int ans = findeqIndex(arr, size);
	cout << endl << "Equilibrium index: " << ans << endl << endl;;



	system("pause");
	return 0;
}
