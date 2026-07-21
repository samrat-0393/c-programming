#include<iostream>
using namespace std;
int main()
{
int a,fact=1;
cout<<"enter any no:";
cin>>a;
if(a<0){
cout<<"error";
}
else{
for(int i=1;i<=a;++i){
 fact*=i;
 }
 }
 cout<<"factorial of"<<a<<"is"<<fact;
 }
