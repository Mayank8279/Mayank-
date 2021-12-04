#include<iostream>
using namespace std;

class student
{
protected:
int rollno;
public:
void getroll(int);
void putroll();
};

class test : public student
{
protected:
int maths,physics;
public:
void getm(int , int);
void putm();
};

void student :: getroll(int x)
{
rollno=x;
}
 
void student :: putroll()
{
cout<<"Roll number:"<<rollno<<endl;
}

void test :: getm(int x, int y)
{
maths=x;
physics=y;
}

void test :: putm()
{
cout<<"Maths marks: "<<maths<<endl;
cout<<"Physics marks:"<<physics<<endl;
}

class sports
{
protected:
int sp;
public:
void getsp(int);
void putsp();
};

void sports :: getsp(int x)
{
sp=x;
}

void sports :: putsp()
{
cout<<"Sports marks: "<<sp<<endl;
}

class result : public test , public sports
{
int total;
public:
void display()
{
total=maths+physics+sp;
putroll();
putm();
putsp();
cout<<"Total marks:"<<total<<endl;
}
};

int main()
{
result obj;
obj.getroll(29);
obj.getm(95,98);
obj.getsp(90);
obj.display();
return 0;
}
