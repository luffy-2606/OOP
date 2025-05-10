#include <iostream>
using namespace std;

template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
class Calculator {
public:
    T add(T& a, T& b)
    {
        return a + b;
    }
    T subtract(T& a, T& b)
    {
        return a - b;
    }
    T multiply(T& a, T& b)
    {
        return a * b;
    }
    T divide(T& a, T& b)
    {
        if (b != 0)
            return a / b;
        else
            cout << "Invalid! Not Supported!" << endl;
        return 0;
    }
};

int main() {
    //Part A:
    int x = 5, y = 10;
    cout << "Before swap (int): " << x << " " << y << endl;
    swapValues(x, y);
    cout << "After swap (int): " << x << " " << y << endl << endl;

    float u = 0.5, v = 8.3;
    cout << "Before swap (float): " << u << " " << v << endl;
    swapValues(u, v);
    cout << "After swap (float): " << u << " " << v << endl << endl;

    char m = 'X', n = 'Y';
    cout << "Before swap (char): " << m << " " << n << endl;
    swapValues(m, n);
    cout << "After swap (char): " << m << " " << n << endl << endl;

    //Part B:
    Calculator<int> calc1;
    cout << "Adding two integer values:" << endl;
    int a = 4, b = 2;
    cout<<"4 + 2  = "<<calc1.add(a, b)<<endl; 
    Calculator<float> calc2;
    cout << "Dividing two float values:" << endl;
    float o = 5.5, p = 2.0;
    cout<<"5.5 / 2.0 = "<<calc2.divide(o, p)<<endl; 
	return 0;
}
