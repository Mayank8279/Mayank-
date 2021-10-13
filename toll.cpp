#include<iostream>
using namespace std;

class toll
{
unsigned int car_total;
double amount;
int paying;
int non_paying;
public:
void menu(void);
void paying(void);
void non_paying(void);
void display(void);

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
cout<<"Cars Total: "<<car_total;
cout<<"Cash Total: "<<amount;
}

int main()
{
toll a;
int x,y;
cout<<"Enter 1 for paying cars OR , for non-paying cars OR 3 for display: ";
cin>>x;
void initial(void);
do{
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
default;
{
cout<<"Enter the correct choice"<<endl;
}
}
cout<<"DO you wish to continue(Y for yes/ N for no): ";
cin>>y;
}while(y=='Y');
a.initial();
a.paying();
a.non_paying();
a.display();
}


