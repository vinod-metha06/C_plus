#include<iostream>
using namespace std;
#include <stdlib.h> //For system("clear") function  /Alternative of conio.



#include <curses.h> //For getch() function     /Alternative of conio.h
#define max 20
class queue
{
private:
int front,rear,ele,q[20],i;
public:
queue()
{
front=0;
rear=-1;
}
void enque()
{
rear=rear+1;
cout<<"Enter the element to insert in queue"<<endl;
cin>>ele;
q[rear]=ele;
}
void deque()
{
if(front>rear)
cout<<"Queue underflow"<<endl;
else
cout<<"Element deleted from queue is "<<q[front]<<endl;
front=front+1;
}
void display()
{
if(front>rear)
cout<<"Queue underflow"<<endl;
else
cout<<"Elements of queue are:"<<endl;
for(i=front;i<=rear;i++)
{
cout<<q[i]<<"";

}
}
};
int main()
{
char choice;
int option;
queue q;

do
{
cout<<"Enter:"<<endl;
cout<<"1->Enque"<<endl;
cout<<"2->Deque"<<endl;
cout<<"3->Display"<<endl;
cin>>option;
switch(option)
{case 1:q.enque();
break;
case 2:q.deque();
break;
case 3:q.display();
break;
default:cout<<"Invalid option"<<endl;
break;
}
cout<<"Do you wish to continue(y/n)"<<endl;
cin>>choice;
}while(choice=='y');
getch();
}