#include <iostream>
#include <string>
using namespace std;


class BankAccount{
	string accountHolder;
	double balance;

public:
	BankAccount(string s, double b)
	{
		this->accountHolder = s;
		this->balance = b;
	}

	const int getBalance()
	{
		return this->balance;
	}
	void deposit(double am)
	{
		if (am <= 0)
			cout << "Invalid amount\n";
		else
			this->balance = this->balance + am;
	}
	void withdraw(double am)
	{
		if (balance < am)
			cout << "Insuffiecient balance\n";
		else
			this->balance = this->balance - am;
	}
};

int main()
{
	BankAccount Acc("Saaif Suleman", 150000);
	cout<<"Account Holder: Saaif Suleman\n";
	cout << "Current Amount: " << Acc.getBalance() << endl;
	double am;
	cout << "Enter the amount to deposit: ";
	cin >> am;
	Acc.deposit(am);
	cout << "\nNew Updated Amount: " << Acc.getBalance() << endl;

	system("pause");
	return 0;
}
