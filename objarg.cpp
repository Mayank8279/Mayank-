#include<iostream>
using namespace std;

class test
{
int h,m;
public:
void gettime(int , int);
void puttime(void);
void sum(test , test);
};

void test :: gettime(int x , int y)
{
h=x;
m=y;
}

void test :: puttime(void)
{
cout<<"Hours  : "<<h<<endl;
cout<<"Minutes: "<<m<<endl;
}

void test :: sum(test t1 , test t2)
{
m=t1.m+t2.m;
h=m/60;
m=m%60;
h=h+t1.h+t2.h;
}

int main()
{
test t1,t2,t3;
t1.gettime(4,35);
t2.gettime(5,40);
t3.sum(t1,t2);
t1.puttime();
t2.puttime();
t3.puttime();
return 0;
}


