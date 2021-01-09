#include<iostream>
using namespace std;

#include <stdlib.h> //For system("clear") function  /Alternative of conio.h
#include <curses.h>

int main()
{
int a[100],n,i;
system("clear");
cout<<"Enter the size of array"<<endl;
cin>>n;
cout<<"Enter the elements of array"<<endl;
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"Element in the array"<<endl;
for(i=0;i<n;i++)
{
cout<<a[i];
cout<< endl;
}
cout<< endl;

getch();
}