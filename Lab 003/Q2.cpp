#include <iostream>
using namespace std;

void compactArray(int** &data, int &N, int M)
{
	int** arr = new int*[N];

	for (int i = 0; i < N; i++)
	{
		int count = 0;
		for (int j = 0; j < M; j++)
		{
			if (data[i][j] != 0)
				count++;
		}
		arr[i] = new int[count + 1];
		arr[i][count] = -1;

		int k = 0;
		for (int j = 0; j < M; j++)
		{
			if (data[i][j] != 0)
			{
				arr[i][k] = data[i][j];
				k++;
			}
		}
	}
	for (int i = 0; i < N; i++)
		delete[] data[i];
	delete data;
	data = arr;

}


void printArray(int **data, int rows, int cols)
{
	for (int i = 0; i < rows; i++) 
	{
		for (int j = 0; j<cols&&data[i][j]!=-1; j++)
			cout << data[i][j] << " ";
		cout << endl;
	}
}

int main() 
{
	const int originalRows = 4;
	const int originalCols = 5;
	int **data = new int*[originalRows]{
			new int[originalCols]{1, 0, 2, 0, 3},
			new int[originalCols]{0, 0, 0, 4, 5},
			new int[originalCols]{6, 0, 7, 8, 0},
			new int[originalCols]{0, 9, 10, 0, 11}
	};

	int rows = originalRows;
	int cols = originalCols;
	std::cout << "Original array:\n";
	printArray(data, rows, cols);

	compactArray(data, rows, originalCols);

	cout << "\nCompacted array:\n";
	printArray(data, rows, cols);

	for (int i = 0; i < rows; ++i) {
		delete[] data[i];
	}
	delete[] data;

	system("pause");
	return 0;
}
