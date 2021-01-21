#include<iostream>
using namespace std;
#include <stdlib.h> //For system("clear") function  /Alternative of conio.h
#include <curses.h> //For getch() function     /Alternative of conio.h
class roots
{
private:
int a,b,c;
float det,x,x1,x2;
public:
void input_data()
{
cout<<"Input the values for co-efficients (a,b and c)";
cout<<"a=";
cin>>a;
cout<<"b=";
cin>>b;
cout<<"c=";
cin>>c;
}
void compute()
{
det=b*b-4*a*c;
}
void display()
{
if(det==0)
{
x=-b/(2*a);
cout<<"Roots are equal"<<endl;
cout<<"Root is "<<x;
}
if(det<0)
{
cout<<"Roots are imaginary"<<endl;
}
if(det>0)
{
x1=(-b+float(det))/(2*a);
x2=(-b-float(det))/(2*a);
cout<<"Roots are real and distinct"<<endl;
cout<<"Roots are "<<x1<<"and"<<x2;
}
}
};
int main()
{
roots r;
system("clear");
r.input_data();
r.compute();
r.display();getch();
}