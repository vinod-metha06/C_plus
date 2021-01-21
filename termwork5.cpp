#include<iostream>
using namespace std;
#include <stdlib.h> //For system("clear") function  /Alternative of conio.h
#include <curses.h> //For getch() function     /Alternative of conio.h
int main(){
    int a[100],ele,n,i,mid,low,high,loc;
system("clear");
cout<<"Enter the size of array"<<endl;
cin>>n;
cout<<"Enter the elements of array"<<endl;
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"Enter the element to be searched"<<endl;
cin>>ele;
high=n-1;
low=0;
loc=-1;
while(low<=high)
{
mid=(low+high)/2;
if(a[mid]==ele)
{
loc=mid+1;
break;
}
if(ele>a[mid])
low=mid+1;
else
high=mid-1;
}
if(loc==-1)
cout<<"Element not found"<<endl;
else
cout<<"Element "<<ele<<" found at location "<<loc;
getch();
}
