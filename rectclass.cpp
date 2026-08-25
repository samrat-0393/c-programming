#include <iostream>
using namespace std;

class rectangle{
private:
   int length;
  int breadth;
  int area;
public:
   rectangle() {
   length=0;
  breadth=0;
    area=0;  
    }
    rectangle(int l,int b){
          length=l;
          breadth=b;
    }
    rectangle(const rectangle &r){
      length=r.length;
     breadth=r.breadth;
    }
    void display(){
       cout<<"length of rectangle:"<<length<<endl;
        cout<<"breadth of rectangle:"<<breadth<<endl;
      cout<<"area of rectangle:"<<length*breadth<<endl;
       }
   };
   int main(){
  rectangle r1;
   cout<<"default constructor:"<<endl;
   r1.display();
   rectangle r2(10,6);
   cout<<"\nParamaterized constructor:"<<endl;
   r2.display();
   rectangle r3(r2);
   cout<<"\ncopy constructor:"<<endl;
   r3.display();
   
   return 0;
  }
