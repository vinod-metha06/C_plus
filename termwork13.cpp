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
int main()
{
char choice;
stack s;

do
{
s.push();
cout<<"Do you wish to continue(y/n)"<<endl;
cin>>choice;
}
while(choice=='y');
s.display();
getch();
}