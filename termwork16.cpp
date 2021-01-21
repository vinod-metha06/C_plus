#include<iostream>
using namespace std;
#include <stdlib.h> //For system("clear") function  /Alternative of conio.
#include <curses.h> //For getch() function     /Alternative of conio.h
class linked_list
{
private:
int ele;
struct node
{
int data;
node *link;
}*start,*newnode,*temp;
public:
linked_list()
{
start=NULL;
}
void append()
{
cout<<"Enter element to insert"<<endl;
cin>>ele;
newnode=new node;
newnode->data=ele;
newnode->link=NULL;
if(start==NULL)
{
start=newnode;
cout<<ele<<" is inserted"<<endl;
}
else
{
temp=start;
while(temp->link!=NULL)
temp=temp->link;
temp->link=newnode;
cout<<ele<<" is inserted"<<endl;
}
}
void display()
{
if(start==NULL)
{
cout<<"Linked list is empty"<<endl;
return;
}
cout<<"Linked list contains"<<endl;
temp=start;
while(temp!=NULL)
{
cout<<temp->data<<"->";
temp=temp->link;
}
cout<<"NULL"<<endl;
}
};
int main()
{char choice;
int option;
linked_list l;

do
{
cout<<"Enter:"<<endl;
cout<<"1->Append"<<endl;
cout<<"2->Display"<<endl;
cin>>option;
switch(option)
{
case 1:l.append();
break;
case 2:l.display();
break;
default:cout<<"Invalid choice"<<endl;
break;
}
cout<<"Do you wish to continue(y/n):";
cin>>choice;
}while(choice=='y');
getch();
}