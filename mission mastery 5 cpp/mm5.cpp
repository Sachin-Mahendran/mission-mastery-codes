#include<iostream>
using namespace std;
int find(int ar[],int n,int t,int in=0)
{
  if(in==n)
 {
   return -1;
 }
 if(ar[in]==t)
 {
   return in;
 }
 return find(ar,n,t,in+1);
}
int main()
{
  int b;
  cin>>b;
  int ar[b];
  for(int i=0;i<b;i++)
  {
    cin>>ar[i];
  }
  int x;
  cin>>x;
  int r=find(ar,b,x);
  if(r!=-1)
  {
    cout<<"The number is present at index "<<r;
  }
  else
  {
    cout<<"The number is not present in the list";
  }
}