#include<iostream>
using namespace std;
class NumberFinder
{
private:
 int num1; 
 int num2;
public:
void inputNumbers(){
cout<<"enter the first number:";
cin>>num1;
cout<<"enter the second number:";
cin>>num2;
}
void displayGreatest(){
if(num1>num2){
cout<<"Greatest number is:"<<num1<<"\n";
}
else if(num1<num2){
cout<<"Greatest number is:"<<num2<<"\n";
}
else {
cout<<"Both numbers are equal:"<<num2<<"\n";
}
}
};
int main (){
NumberFinder obj;
obj.inputNumbers();
obj.displayGreatest();
return 0;
}

