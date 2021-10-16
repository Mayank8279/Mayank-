  
#include<iostream>
using namespace std;

class toll
{
unsigned int car_total;
double amount;
public:
void initial();
void paying();
void non_paying();
void display();

};

void toll :: initial()
{
car_total=0;
amount=0;
}

void toll :: paying()
{
car_total++;
amount=amount+50;
}

void toll :: non_paying()
{
car_total++;
}

void toll :: display()
{
cout<<"Cars Total: "<<car_total<<endl;
cout<<"Cash Total: "<<amount<<endl;
}

int main()
{
toll a;
int x,y;
int initial();
do{
cout<<"Enter 1 for paying cars OR , for non-paying cars OR 3 for display: ";
cin>>x;
switch(x)
{
case 1:
{
a.paying();
break;
}
case 2:
{
a.non_paying();
break;
}
case 3:
{
a.display();
break;
}
default:
{
cout<<"Invalid choice"<<endl;
}
}
}while(x!=3);
}
