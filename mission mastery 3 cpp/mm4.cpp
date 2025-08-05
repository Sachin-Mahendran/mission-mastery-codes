#include<iostream>
using namespace std;
int main()
{
     int n;
     cin>>n;
     if(n<0)
     {
         cout<<"Invalid Input";
         return 0;
     }
     int a[n],b[n];
     for(int i=0;i<n;i++)
     {   
          cin>>a[i];
         if(a[i]<0)
         {
         cout<<"Invalid Input";
         return 0;
         }
     }
     for(int i=0;i<n/2;i++)
     {
          int x=a[i];
          a[i]=a[n-1-i];
          a[n-1-i]=x;
     }
     for(int i=0;i<n;i++)
     {
         cout<<a[i]<<endl;
     }
     
    
}