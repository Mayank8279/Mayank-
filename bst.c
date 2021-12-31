#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *left,*right;
};

struct node * create(int value)
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=value;
newnode->left=NULL;
newnode->right=NULL;
return newnode;
}

struct node * insert(struct node *obj,int value)
{
	if(obj==NULL)
{
	obj=create(value);
}
else
{
	if(obj->data>value)
{
obj->left=insert(obj->left,value);
}
else if(obj->data<value)
{
obj->right=insert(obj->right,value);
}
}
return(obj);
}

void display(struct node *obj)
{
if(obj==NULL)
{
return;
}
else
{
display(obj->left);
	printf("%d",obj->data);
display(obj->right);
}
}

int main()
{
int x,a,b;
struct node *obj=NULL;
do
{
printf("Enter 1 for insert, 2 for display: ");
scanf("%d",&a);
switch(a)
{
case 1:
{
printf("Enter the value: ");
scanf("%d",&x);
obj=insert(obj,x);
break;
}
case 2: display(obj);
	break;
default:
{
printf("Enter Y for continue and N for exit: ");
scanf("%d",&b);
}
}
}while(b!='N' && b!='n');
}



