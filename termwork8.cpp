#include<iostream>
using namespace std;
#include <stdlib.h> //For system("clear") function  /Alternative of conio.h
#include <curses.h> //For getch() function     /Alternative of conio.h
int a,b,c,l;
int area(int a)
{
int area1;
cout<<"Enter the side of square"<<endl;
cin>>a;
area1=a*a;
cout<<"Area of the square is "<<area1;
return 0;
}
int area(int l,int b)
{
int area2;
cout<<"Enter the length and breadth of rectangle"<<endl;
cout<<"length=";
cin>>l;
cout<<"Breadth=";
cin>>b;
area2=l*b;
cout<<"Area of rectangle is "<<area2;
return 0;
}
float area(int a,int b,int c)
{
float s,area3;
cout<<"Enter the sides of triangle"<<endl;
cout<<"a=";
cin>>a;
cout<<"b=";
cin>>b;
cout<<"c=";
cin>>c;
s=(a+b+c)/2;
area3=float(s*(s-a)*(s-b)*(s-c));
cout<<"Area of triangle is "<<area3;
return 0;
}
int main()
{
int option;

cout<<"Enter:"<<endl;
cout<<"1-Area of square"<<endl;
cout<<"2-Area of rectangle"<<endl;
cout<<"3-Area of triangle"<<endl;
cin>>option;
switch(option)
{
case 1:area(a);
break;
case 2:area(l,b);
break;case 3:area(a,b,c);
break;
default:cout<<"Invalid option";
break;
}
getch();
}