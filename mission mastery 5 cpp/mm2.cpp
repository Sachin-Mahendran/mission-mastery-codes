#include<iostream>
#include<cstring>
using namespace std;
void rev(string &a,int s,int x)
{
  if(s>=x)
  {
    return ;
  }
  char t=a[s];
  a[s]=a[x];
  a[x]=t;
  return rev(a,s+1,x-1);
}
int main()
{
  string b;
  cin>>b;
  int ii=0;
  int jj=b.length()-1;
  rev(b,ii,jj);
  cout<<b;
}