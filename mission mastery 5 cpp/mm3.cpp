#include<iostream>
using namespace std;
int fimax(int ar[],int n)
{
  if(n==1)
  {
    return ar[0];
  }
  return max(ar[n-1],fimax(ar,n-1));
}
int main()
{
  int b;
  cin>>b;
  if(b<=0)
  {
    cout<<"Invalid Input";
    return 0;
  }
  int ar[b];
  for(int i=0;i<b;i++)
  {
    cin>>ar[i];
  }
  cout<<fimax(ar,b);
  return 0;
  
}