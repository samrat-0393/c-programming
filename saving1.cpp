#include<iostream>
using namespace std;
class SavingAccount 
{
private:
string accountHolderName;
int accountNumber;
double balance;
double interestRate;
public:
SavingAccount(string name,int accNumber,double initialBalance,double rate)
{
accountHolderName=name;
accountNumber=accNumber;
balance=initialBalance;
interestRate=rate;
}
void deposite(double amount)
{
if(amount>0)
{
balance+=amount;
cout<<"Deposited:"<<amount<<endl;
}
}
void withdraw(double amount) 
{
if(amount>0&&amount<=balance)
{
balance-=amount;
cout<<"Withdrawn:"<<amount<<endl;
}
else
{
cout<<"Insufficient balance!"<<endl;
}
}
void applyInterest()
{
double interest=balance*interestRate/100;
balance+=interest;
cout<<"Interest Applied:"<<interest<<endl;
}
void display(){
cout<<"\n[Saving Account]"<<endl;
cout<<"Account Holder:"<<accountHolderName<<endl;
cout<<"Balance:"<<balance<<endl;
cout<<"Interest Rate:"<<interestRate<<"%"<<endl;
}
};
int main()
{
SavingAccount savings("Alice",1001,5000,3);
savings.display();
savings.deposite(1000);
savings.withdraw(2000);
savings.applyInterest();
savings.display();
return 0;
}





















