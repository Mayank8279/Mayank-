#include<iostream>
using namespace std;

void mat(int a, int b)
{
int d[a][b];
for(int i=0 ; i<a ; i++)
{
for(int j=0 ; j<b ; j++)
{
cin>>d[i][j];
}
}
for(int i=0 ; i<a ; i++)
{
for(int j=0 ; j<b ; j++)
{
cout<<d[i][j]<<endl;
}
}
}


int main()
{
int M,N;
cout<<"Enter the rows and column of matrix: ";
cin>>M>>N;
mat(M,N);
return 0;
}
