#include<iostream>
using namespace std;
#include<iomanip>
#include <stdlib.h> //For system("clear") function  /Alternative of conio.h
#include <curses.h> //For getch() function     /Alternative of conio.h


class frequency
{        
   private:
            int n, m[100], ele, freq;
   public:
           void getdata();
           void findfreq();
           void display ();
};


void frequency::getdata()
{
      cout<<"Enter the size of the array:";
      cin>>n;
      cout<<"Enter "<<n<<" elements into the array:  ";
      for(int i=0; i<n; i++)
         cin>>m[i];
      cout<< "Enter the search elements:  ";
      cin>>ele;
}


void frequency::findfreq()
{       
   freq=0;
   for(int i=0; i<n; i++)
      if(ele==m[i])
          freq++;
}


void frequency::display()
{         
   if(freq > 0)
       cout<<"frequency of "<<ele<<" is "<<freq << endl;
       else
        cout<<ele<<" does not exist"<< endl;
}


 int main()
 {      
    frequency F;
   system("clear"); // Alternative of clrscr() function using #include <stdlib.h> 
    F.getdata();
    F.findfreq();
    F.display();
    getch();      //using #include <curses.h> 
 }