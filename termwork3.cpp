#include<iostream>
using namespace std;
#include <stdlib.h> //For system("clear") function  /Alternative of conio.h
#include <curses.h> //For getch() function     /Alternative of conio.h
int main()
{
int a[100],n,i,pos;
system("clear"); // Alternative of clrscr() function using #include <stdlib.h> 
cout<<"Enter the size of array"<<endl;
cin>>n;
cout<<"Enter the elements of array"<<endl;
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"Enter the position to delete element"<<endl;
cin>>pos;
if(pos<n)
{
cout<<"Array before deletion:"<<endl;
for(i=0;i<n;i++)
{
cout<<a[i]<<"";
}
cout<<endl;
for(i=pos-1;i<n-1;i++)
{
a[i]=a[i+1];
}
cout<<"Array after deletion:"<<endl;
for(i=0;i<n-1;i++)
{
cout<<a[i]<<"";
}
}
else
cout<<"Invalid position"<<endl;
getch();
}
