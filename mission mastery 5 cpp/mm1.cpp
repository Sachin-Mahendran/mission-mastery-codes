#include<iostream>
using namespace std;
int power(int b,int e)
{
  if(e==0)
  {
    return 1;
  }
  else
  {
    return b*power(b,e-1);
  }
}
int main()
{
  int b,e;
  cin>>b>>e;
  int ans=power(b,e);
  cout<<ans;
}