#include <iostream>
using namespace std;

class Account
{
private:
    
    string accountHolder;
    int accountNumber;
    double deposit;
    double balance;
    double interestRate;

public:
    
    Account(string name, int number,double dep, double amount, double rate)
    {
        accountHolder = name;
        accountNumber = number;
        deposit=dep;
        balance = amount;
        interestRate = rate;
    }

  
    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "\nWithdrawal successful!" << endl;
        }
        else
        {
            cout << "\nInsufficient balance!" << endl;
        }
    }

    
    double calculateInterest()
    {
        return balance * interestRate / 100;
    }

    
    void display()
    {
        cout << "\n----- Account Details -----" << endl;
        cout << "Account Holder Name : " << accountHolder << endl;
        cout << "Account Number      : " << accountNumber << endl;
        cout << "deposit             : " << deposit << endl;
        cout << "Available Balance   : " << balance << endl;
        cout << "Interest Rate       : " << interestRate << "%" << endl;
        cout << "Interest Amount     : " << calculateInterest() << endl;
        cout << "Total  Balance      : " << calculateInterest()+balance << endl;
    }
};

int main()
{
    string name;
    int accountNumber;
    double deposit,balance, interestRate, withdrawalAmount;

    
    cout << "Enter Account Holder Name: ";
    cin >> name;

    cout << "Enter Account Number: ";
    cin >> accountNumber;
    
    cout << "Enter deposit: ";
    cin >> deposit;

    cout << "Enter Initial Balance: ";
    cin >> balance;

    cout << "Enter Interest Rate (%): ";
    cin >> interestRate;

    
    Account a(name, accountNumber,deposit, balance, interestRate);

    cout << "\nEnter Withdrawal Amount: ";
    cin >> withdrawalAmount;

    
    a.withdraw(withdrawalAmount);
    a.display();

    return 0;
}

