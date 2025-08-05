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
     int a[n];
     for(int i=0;i<n;i++)
     {
        cin>>a[i];
        if(a[i]<0)
        {
         cout<<"Invalid Input";
         return 0;
        }  
          
     }
     for(int i=1;i<n;i++)
     {
          if(a[i-1]>a[i])
          {
              cout<<i<<endl;
          }
     }
     if(n-1 > n-2 && n>2)
     {
         cout<<n;
}
}