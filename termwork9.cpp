#include<iostream>
using namespace std;
#include <stdlib.h> //For system("clear") function  /Alternative of conio.
#include <curses.h> //For getch() function     /Alternative of conio.h
int c,n;
inline int cube(int a)
{
int c;
c=a*a*a;
cout<<"Cube of "<<n<<" is "<<c;
return 0;
}
int main()
{

cout<<"Enter the number to find cube"<<endl;
cin>>n;
cube(n);
getch();
}


