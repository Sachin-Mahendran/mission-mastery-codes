#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int ar[n][n];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      cin>>ar[i][j];
    }
  }
  int sum=0;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(i==0||j+i==n-1||i==n||i==j)
      {
        sum=sum+ar[i][j];
      }
    }
  }
  cout<<sum;
}