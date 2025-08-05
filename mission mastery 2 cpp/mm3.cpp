#include<iostream>
using namespace std;
int main()
{
  int n,c=0,cc=0;
  cin>>n;
  int ar[n];
  for(int i=0;i<n;i++)
  {
    cc=0;
    for(int j=0;j<=i;j++)
    {
       cout<<++c;
       cc++;
    }
    ar[i]=cc;
    cout<<endl;
  }
  for(int i=n-1;i>0;i--)
  {
    c=c-ar[i-1]-ar[i];
    for(int j=0;j<i;j++)
    {
      cout<<++c;
    }
    cout<<endl;
  }
}