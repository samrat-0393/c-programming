#include<iostream>
using namespace std;
int main()
{
int n,sum;
cout<<"enter a positive integer n:";
cin>>n;
if(n<1) {
cout<<"please enter positive no:";
}
else{
sum=n*(n+1)/2;
cout<<"sum of first n natural no:"<<sum;
}
}
