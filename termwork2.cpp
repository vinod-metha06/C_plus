#include<iostream>
using namespace std;
#include<iomanip>
#include <cstdlib>   // used for  exit(0) 
using namespace std;
#include <curses.h> //For getch() function     /Alternative of conio.h

class insertion
{    
    private: int n, m[100],ele ,p;
    public:
            void getdata();
            void insert();
            void display();
};
void insertion::getdata()
{
    cout<<"How many elements? ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++)
         cin>>m[i];
    cout<<"Enter the element to be inserted: ";
    cin>>ele;
    cout<<"Enter the position( 0 to "<<n<<"): ";
    cin>>p;
}
void insertion::insert()
{
     if (p > n)
     {
         cout<<p<<"is an invaliad position";
         getch();    //using #include <curses.h> 
         exit(0);    //using #include <cstdlib> 
     }
}
