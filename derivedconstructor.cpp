#include<iostream>
using namespace std;

class A
{
protected:
int a;
public:
A(int x)
{
a=x;
}
void display1()
{
cout<<"Value of A: "<<a<<endl;
}
};

class B
{
protected:
int b;
public:
B(int y)
{
b=y;
}
void display2()
{
cout<<"Value of B: "<<b<<endl;
}
};

class C : public A , public B
{
int d;
public:
C(int x , int y , int f) : A(x) , B(y)
{
d=f;
}
void display3()
{
cout<<"Value of D: "<<d<<endl;
}
};

int main()
{
C obj(4,5,6);
obj.display1();
obj.display2();
obj.display3();
return 0;
}

