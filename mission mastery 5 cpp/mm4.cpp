#include<iostream>
using namespace std;
int sum(int ar[],int n)
{
  if(n<=0)
  {
    return 0;
  }
  return ar[n-1]+sum(ar,n-1);
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
  cout<<sum(ar,b);
}