#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int a,rem,originalNum,result=0;
 cout<<"enter any no. to check armstrong number :";
 cin>>a;
 originalNum=a;
 while(originalNum!=0){
rem=originalNum%10;
result=result+pow(rem,3);
originalNum/=10;
}

if(result==a){
cout<<a<<"is armstong no";
}
else {
cout<<a<<"is not armstong no";
}
}
