#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int wid=(2*n)-1;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<wid;j++)
    {
      if(j==0||j==wid-1||j==i||j+i==wid-1)
      {
        cout<<"*";
      }
      else
      {
        cout<<" ";
      }
    }cout<<endl;
  }
}