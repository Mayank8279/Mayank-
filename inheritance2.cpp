#include<iostream>
using namespace std;

class employee
{
public:
int id;
float salary;
employee(int inpID)
{
id=inpID;
salary=5000;
}
employee()
{}
};

class programmer : public employee
{
public:
int languagecode;
programmer(int inpID)
{
id=inpID;
languagecode=100;
}

void getdata()
{
cout<<id<<endl;
}
};
int main()
{
employee tom(1),jerry(2);
cout<<tom.salary<<endl;
cout<<jerry.salary<<endl;
programmer hello(200);
cout<<hello.languagecode<<endl;
cout<<hello.id<<endl;
hello.getdata();
return 0;
}

