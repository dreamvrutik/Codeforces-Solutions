#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int maxa=a[0],mina=a[0],pmax,pmin;
    for(int i=0;i<n;i++)
    {
        if(mina>a[i])
            mina=a[i];
        if(maxa<a[i])
            maxa=a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==maxa)
        {
            pmax=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==mina)
        {
            pmin=i;
            break;
        }
    }
    int ct=0;
    ct+=pmax;
    ct+=n-1-pmin;
    if(pmax>pmin)
        ct--;
    cout<<ct;

}
