#include<iostream>
using namespace std;
#include <stdlib.h> //For system("clear") function  /Alternative of conio.
#include <curses.h> //For getch() function     /Alternative of conio.h
class stack
{
private:
int top,ele,s[20],i;
public:
stack()
{
top=-1;
}
void push()
{
top=top+1;
cout<<"Enter the element to insert"<<endl;
cin>>ele;
s[top]=ele;
}
void pop()
{
if(top==-1)
cout<<"Stack underflow"<<endl;
else
cout<<"Element deleted is "<<s[top]<<endl;
top=top-1;
}
void display()
{
if(top==-1)
cout<<"Stack underflow"<<endl;
else
cout<<"Stack elements are"<<endl;
for(i=top;i>=0;i--)
{
cout<<s[i]<<endl;
}
}
};
void main()
{
char choice;
int option;
stack s;

do
{
cout<<"Enter:"<<endl;
cout<<"1->Push"<<endl;
cout<<"2->Pop"<<endl;
cout<<"3->Display"<<endl;
cin>>option;
switch(option)
{
case 1:s.push();
break;case 2:s.pop();
break;
case 3:s.display();
break;
default:cout<<"Invalid option"<<endl;
break;
}
cout<<"Do you wish to continue(y/n)"<<endl;
cin>>choice;
}while(choice=='y');
getch();
}