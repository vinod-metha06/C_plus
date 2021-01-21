#include<iostream>
using namespace std;
#include <stdlib.h> //For system("clear") function  /Alternative of conio.
#include <curses.h> //For getch() function     /Alternative of conio.h
class student
{
private:
int roll_no;
char name[50];
public:
void input_data()
{
cout<<"Enter the roll number:";
cin>>roll_no;
cout<<"Enter the name:";
cin>>name;
}
void display_data()
{
cout<<"Roll number:"<<roll_no<<endl;
cout<<"Name of student:"<<name<<endl;
}
};
class marks:public student
{
private:
int m1,m2,total;
public:
void input_marks()
{
cout<<"Enter the marks of two subjects"<<endl;
cout<<"Subject 1:";
cin>>m1;
cout<<"Subject 2:";
cin>>m2;
}
void calculate()
{
total=m1+m2;
}
void display_marks()
{
cout<<"Subject 1="<<m1<<endl;
cout<<"subject 2="<<m2<<endl;
cout<<"Total="<<total;
}
};
int main()
{
marks m;

m.input_data();
m.input_marks();
m.calculate();m.display_data();
m.display_marks();
getch();
}