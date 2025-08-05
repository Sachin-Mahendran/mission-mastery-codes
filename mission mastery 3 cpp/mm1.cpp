#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=0;
    cin>>n;
    if(n<0)
    {
        cout<<"Invalid Input";
        return 0;
    }
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n;i++)
    {
        if(ar[i]<0)
        {
            a++;
        }
        b=b+ar[i];
    }
    if(a!=0)
    {
        cout<<"Invalid Input";return 0;
    }
    cout<<b/n;
}