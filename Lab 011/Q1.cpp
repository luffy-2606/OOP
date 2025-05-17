#include <iostream>
using namespace std;

int main()
{
    int a, b;
    try {
        cout << "Enter the First Number: ";
        cin >> a;
        if (cin.fail()) {
            throw "Invalid input for the First Number.";
        }

        cout << "Enter the Second Number: ";
        cin >> b;
        if (cin.fail()) {
            throw "Invalid input for the Second Number.";
        }

        if (b == 0)
            throw 0;
        else
            cout << "\nDividing the two numbers: " << a / (b * 1.0) << endl;
    }
    catch (const char* msg) {
        cout << "\nError: " << msg << endl;
    }
    catch (int e) {
        cout << "\nError: Division by zero is not allowed." << endl;
    }

    return 0;
}
