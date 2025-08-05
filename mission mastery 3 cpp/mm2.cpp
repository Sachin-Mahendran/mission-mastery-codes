#include<iostream>
using namespace std;
int main()
{
  int n,a=0;
  cin>>n;
  int ar[n];
  if(n<0)
  {
    cout<<"Invalid Input";
  }
  else
  {
  for(int i=0;i<n;i++)
  {
    
      cin>>ar[i];
  }
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(ar[i]>ar[j]){
      int c=ar[i];
      ar[i]= ar[j];
      ar[j]=c; 
      if(ar[i]<0)
    {
      a++;
    }
        
      }
    }
  }
  if(a==1)
  {
  cout<<"Invalid Input";}
  else{
  for(int i=0;i<n;i++)
  {
   
  
    cout<<ar[i]<<endl;}
  }
  
}}