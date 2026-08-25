#include <iostream>
#include <string>
using namespace std;

class product{
private:
   int id;
   string name;
   float price;
   int quantity;
   float totalprice;
public:
  product() {
      id=0;
      name="unknown";
      price=0.0;
      quantity=0;
       totalprice=0.0;
    }
    product(int i,string productname,float v,int q){
      id=i;
      name=productname;
      price=v;
      quantity=q;
    }
    product(const product &p){
       id=p.id;
       name=p.name;
        price=p.price;
      quantity=p.quantity;
    }
    void display(){
       cout<<"product id:"<<id<<endl;
        cout<<"product name:"<<name<<endl;
       cout<<"product price:"<<price<<endl;
       cout<<"product quantity:"<<quantity<<endl;
       cout<<"total price:"<<price*quantity<<endl;
       }
   };
   int main(){
   product p1;
   cout<<"default constructor:"<<endl;
   p1.display();
   product p2(101,"keyboard",500.50,4);
   cout<<"\nParamaterized constructor:"<<endl;
   p2.display();
   product p3(p2);
   cout<<"\ncopy constructor:"<<endl;
   p3.display();
   return 0;
  }
