#include<iostream>
using namespace std;
#include <stdlib.h> //For system("clear") function  /Alternative of conio.h
#include <curses.h> //For getch() function     /Alternative of conio.h
int main(){

int a[100],n,i,j,temp;
system("clear"); // Alternative of clrscr() function using #include <stdlib.h> 
cout<<"Enter the size of array"<<endl;
cin>>n;
cout<<"Enter the elements of array"<<endl;
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"Unsorted array:"<<endl;
for(i=0;i<n;i++)
{
cout<<a[i]<<" ";

}
cout<<endl;
for(i=1;i<n;i++)
{
j=i;
while(j>=1)
{
if(a[j]<a[j-1])
{
temp=a[j];
a[j]=a[j-1];
a[j-1]=temp;
}
j=j-1;
}
}
cout<<"Sorted array:"<< endl;
for(i=0;i<n;i++)
{
cout<<a[i]<<"";
cout<<endl;
}
cout<<endl;

getch();

}