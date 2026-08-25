#include <iostream>
#include <string>
using namespace std;

class employee{
private:
   int id;
   string name;
   float salary;
public:
   employee() {
      id=0;
      name="unknown";
      salary=0.0;
    }
    employee(int i,string empname,float s){
          id=i;
          name=empname;
          salary=s;
    }
    employee(const employee &e){
       id=e.id;
       name=e.name;
       salary=e.salary;
       
    }
    void display(){
       cout<<"employee id:"<<id<<endl;
        cout<<"employee Name:"<<name<<endl;
       cout<<"employee salary:"<<salary<<endl;
       }
   };
   int main(){
   employee e1;
   cout<<"default constructor:"<<endl;
   e1.display();
   employee e2(101,"ram",50000);
   cout<<"\nParamaterized constructor:"<<endl;
   e2.display();
   employee e3(e2);
   cout<<"\ncopy constructor:"<<endl;
   e3.display();
   return 0;
  }
