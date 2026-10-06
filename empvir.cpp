#include<iostream>
using namespace std;

class Employee
{
public:
    virtual void calculateSalary()
    {
        cout << "salary of employee" << endl;
    }
};
class Manager :public Employee
{
    int salary;

public:
     Manager(int a)
    {
       salary = a;
    }

    void calculateSalary() override
    {
        cout << "salary of manager = " << salary << endl;
    }
};
class Developer :public Employee
{
    int salary;
public:
    Developer(int b)
     {
        salary=b;
      }
      void calculateSalary() override
      {
      cout<<"salary of developer = "<< salary << endl;
      }
};
int main()
{
cout<<"........employee salary details........"<< endl;
   Employee *e;
   
    Manager m(70000);
    Developer d(10000);

    e = &m;
    e->calculateSalary();
    
    e = &d;
    e->calculateSalary();
    
    return 0 ;
}
    

