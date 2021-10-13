#include<iostream>
using namespace std;
#define SIZE 6

class details
{
char name[10];
int id;
int marks[SIZE];
public:
void get(void);
void result(void);
};

void details :: get()
{
cout<<"Enter the name and ID: ";
cin>>name>>id;
cout<<"enter the marks: ";
for(int i=0 ; i<SIZE ; i++)
{
	cin>>marks[i];
}
}

void details :: result()
{
int total=0,avg,c=0;
for(int i=0 ; i<SIZE ; i++)
{
total+=marks[i];
}
avg=(total/SIZE);
cout<<"Average: "<<avg<<endl;
for(int j=0 ; j<SIZE ; j++)
{
if(marks[j]>33)
	c++;
}
if(c==SIZE)
{
cout<<"PASS"<<endl;
}
else
{
cout<<"FAIL"<<endl;
}
}

int main()
{
details a;
a.get();
a.result();
}


