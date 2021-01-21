#include<iostream>
using namespace std;
#include <stdlib.h> //For system("clear") function  /Alternative of conio.h
#include <curses.h> //For getch() function     /Alternative of conio.h
class simple_interest
{
   private:
int principle,time,rate;
float si;
public:
void input_data()
{
cout<<"Input Principle amount=";
cin>>principle;
cout<<"Input time in years=";
cin>>time;
cout<<"Input rate of interest=";
cin>>rate;
}
void compute()
{
si=principle*rate*time/100;
}
void display()
{
cout<<"Simple interest="<<si;
}
};
int main() 

{
simple_interest s;
system("clear");
s.input_data();
s.compute();
s.display();
getch();
} 