#include<iostream>
using namespace std;
int main()
{
    long long int n,x,ct=0,t=1;
    cin>>n>>x;
    long long int a[n],b[n],i;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        if(a[i]>t)
        {
            int g=(a[i]-t)/x;
            g*=x;
            g+=t;
            ct+=a[i]-g;
        }
        ct+=b[i]-a[i]+1;
        t=b[i]+1;
    }
    cout<<ct;
}
