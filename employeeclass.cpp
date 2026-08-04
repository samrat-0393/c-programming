#include<iostream>
#include<string>
using namespace std;
class Employee
{
private:
 int empid;
string name;
float salary;                                     
public:
void acceptDetails(){
cout<<"enter employee id:";
cin>>empid;
cin.ignore();
cout<<"enter employee name:";
getline(cin,name);
cout<<"enter salary:";
cin>>salary;
}
void displayDetails()const{
cout<<"......Employee details......\n";
cout<<"Employee ID:"<<empid<<"\n";
cout<<"Employee Name:"<<name<<"\n";
cout<<"Employee salary:"<<salary<<"\n";
}
};
int main (){
Employee emp;
emp.acceptDetails();
emp.displayDetails();
return 0;
}
