#include<iostream>
using namespace std;
int main()
{
  int a,b;
  cin>>a>>b;
  int ar[a][b];
  for(int i=0;i<a;i++)
  {
    for(int j=0;j<b;j++)
    {
      cin>>ar[i][j];
    }
  }
  int sum=0;
  for(int i=0;i<a;i++)
  {
    for(int j=0;j<b;j++)
    {
      sum=sum+ar[i][j];
    }
  }
  cout<<sum;
}