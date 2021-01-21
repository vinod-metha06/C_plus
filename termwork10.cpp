#include<iostream>
using namespace std;
#include <stdlib.h> //For system("clear") function  /Alternative of conio.
#include <curses.h> //For getch() function     /Alternative of conio.h
int c,n;
class series
{
private:
int sum,n,i,x;
public:
series()
{
sum=1;
}
void input_data()
{
cout<<"Enter the value of n"<<endl;
cin>>n;
cout<<"Enter the value of x"<<endl;
cin>>x;
}
void sum_series()
{
for(i=1;i<=n;i++)
{
sum=sum+n-(x,i);
}
}
void display()
{
cout<<"Sum of the series is "<<sum;
}
};
int main()
{
series s;

s.input_data();
s.sum_series();
s.display();
getch();
}