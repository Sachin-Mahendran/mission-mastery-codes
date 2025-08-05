#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  if(n<0)
  {
    cout<<"Invalid Input";return 0;
  }
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    if(a[i]<0 ||a[i]>6)
    {
      cout<<"Invalid Input";return 0;
    }
  }
  
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(a[i]>a[j]){
      int c=a[i];
      a[i]=a[j];
      a[j]=a[i];}
    }
  }
  int j=1;
  for(int i=1;i<n;i++)
  {
    if(a[i-1]!=a[i])
    {
      a[j++]=a[i];
    }
  }
  cout<<j;
}