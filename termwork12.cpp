#include<iostream>
using namespace std;
#include <stdlib.h> //For system("clear") function  /Alternative of conio.
#include <curses.h> //For getch() function     /Alternative of conio.h
class student
{
private:
int roll_no,fees;
char name[50];
public:
void read_data()
{
cout<<"Enter the roll number:";
cin>>roll_no;
cout<<"Enter the name:";
cin>>name;
cout<<"Enter the fees:";
cin>>fees;
}
void display_data()
{
cout<<"Roll number:"<<roll_no<<endl;
cout<<"Name of student:"<<name<<endl;
cout<<"Fees:"<<fees<<endl;
}
};
int main()
{
student *s;

s->read_data();
s->display_data();
getch();
}