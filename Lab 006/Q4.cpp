#include <iostream>
using namespace std;

class Matrix {
    int rows;
    int cols;
    int** data;

public:
    Matrix(int r = 0, int c = 0) : rows(r), cols(c) 
    {
        data = new int* [rows];         
        for (int i = 0; i < rows; i++) 
            data[i] = new int[cols](); 
    }

    Matrix(const Matrix& other) : rows(other.rows), cols(other.cols) 
    {
        data = new int* [rows];
        for (int i = 0; i < rows; i++) 
        {
            data[i] = new int[cols];
            for (int j = 0; j < cols; j++) 
                data[i][j] = other.data[i][j];
        }
    }

    Matrix& operator=(const Matrix& other) 
    {
        if (this == &other) 
            return *this;

        for (int i = 0; i < rows; i++) 
            delete[] data[i];
        delete[] data;

        rows = other.rows;
        cols = other.cols;
        data = new int* [rows];
        for (int i = 0; i < rows; i++) 
        {
            data[i] = new int[cols];
            for (int j = 0; j < cols; j++) 
                data[i][j] = other.data[i][j];
        }
        return *this;
    }

    ~Matrix() 
    {
        for (int i = 0; i < rows; i++) 
            delete[] data[i];         
        delete[] data;                 
    }

    void InputMatrix() 
    {
        for (int i = 0; i < rows; i++) 
            for (int j = 0; j < cols; j++) 
                cin >> data[i][j];
    }

    Matrix operator*(Matrix& obj) 
    {
        if (cols != obj.rows)
        {
            cout << "Multiplication not possible\n";
            return Matrix(0, 0);
        }
        Matrix result(rows, obj.cols);
        for (int i = 0; i < rows; i++) 
            for (int j = 0; j < obj.cols; j++)
                for (int k = 0; k < cols; k++) 
                    result.data[i][j] += data[i][k] * obj.data[k][j];
        return result;
    }

    void DisplayMatrix() 
    {
        for (int i = 0; i < rows; i++) 
        {
            for (int j = 0; j < cols; j++) 
                cout << data[i][j] << " ";
            cout << endl;
        }
    }
};

int main() {
    Matrix a(1, 2);
    cout << "Enter 1x2 matrix A:\n";
    a.InputMatrix();

    Matrix b(2, 3);
    cout << "Enter 2x3 matrix B:\n";
    b.InputMatrix();

    Matrix c = a * b;
    cout << "Result (a * b):\n";
    c.DisplayMatrix();

    return 0;
}
