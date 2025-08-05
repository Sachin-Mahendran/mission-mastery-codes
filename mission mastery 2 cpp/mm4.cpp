#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<(n-1)-i;j++)
    {
      cout<<" ";
    }
    for(int k=0;k<=i;k++)
    {
      int s;
      if(k==0)
      {
        s=1;
      }
      else
      {
        s=s*(i-k+1)/k;
      }
      cout<<s<<" ";
    }
    cout<<endl;
  }
  
}