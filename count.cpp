#include<iostream>
using namespace std;

class pro
{
int static count;
int no;
public:
void get(int a)
{
no=a;
count++;
}
void getcount(void)
{
cout<<"Count: "<<count;
}
};

int pro :: count;

int main()
{
pro a,b,c,d,e;
a.get(1);
b.get(2);
c.get(3);
d.get(4);
e.getcount();

return 0;
}
