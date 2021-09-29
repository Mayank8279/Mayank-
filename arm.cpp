#include<iostream>
#include<cmath>
using namespace std;

void arm(int a)
{
int sum=0,rem,d;
cout<<"Enter the power: ";
cin>>d;
int n=a;
while(a>0)
{
rem=a%10;
a=a/10;
sum=sum+pow(rem,d);;
}
if(n==sum)
{
cout<<"Number is an armstrong number"<<endl;
}
else
{
cout<<"Number is not a armstrong number"<<endl;
}
}


int main()
{
int n;
cout<<"Enter the number: ";
cin>>n;
arm(n);
return 0;
}
