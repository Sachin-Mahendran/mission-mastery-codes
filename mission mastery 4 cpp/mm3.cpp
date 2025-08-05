#include<iostream>
using namespace std;
int main()
{
  int a;
  cin>>a;
  int ar[a][a];
  for(int i=0;i<a;i++)
  {
    for(int j=0;j<a;j++)
    {
      cin>>ar[i][j];
    }
  }
  int sum=0;
  for(int i=0;i<a;i++)
  {
    for(int j=0;j<a;j++)
    {
      if(i==j)
      {
        sum=sum+ar[i][j];
      }
    }
  }
  cout<<sum;
}