#include <iostream>
using namespace std;

int main()
{
    const int N = 2;
    const int M = 3;

    int matrix[N][M] = { {1, 2, 3},{4, 5, 6} };


    
    int** transpose = new int* [M];

    for (int i = 0; i < M; i++) 
        transpose[i] = new int[N];


    for (int i = 0; i < N; i++) 
        for (int j = 0; j < M; j++) 
            transpose[j][i] = matrix[i][j];
        
    

    cout << "Original matrix (" << N << "x" << M << "):\n";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }

    cout << "\nTranspose (" << M << "x" << N << "):\n";
    for (int i = 0; i < M; i++) 
    {
        for (int j = 0; j < N; j++)
            cout << transpose[i][j] << " ";
        cout << endl;
    }

	//---------------------------------------------------------------


    int** res = new int* [N];
    for (int i = 0; i < N; i++) 
        res[i] = new int[N];
    

    for (int i = 0; i < N; i++) 
        for (int j = 0; j < N; j++) 
        {
            int sum = 0;
            for (int k = 0; k < M; k++) 
                sum = sum + (matrix[i][k] * transpose[k][j]);
            res[i][j] = sum;
        }


    cout << "\nProduct (matrix x transpose) => " << N << "x" << N << ":\n";
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
            cout << res[i][j] << " ";
        cout << endl;
    }


    for (int i = 0; i < M; i++) 
        delete[] transpose[i];
    delete[] transpose;

    transpose = nullptr; 


    for (int i = 0; i < N; i++) 
        delete[] res[i];
    delete[] res;

    res = nullptr; 

	system("pause");
    return 0;
}
