#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>m;
    int b[m],c[n*m];
    for(int i=0;i<n*m;i++)
        c[i]=0;
    int j=0;
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        for(int x=0;x<n;x++)
        {
            if(b[i]%a[x]==0)
                c[j++]=b[i]/a[x];
        }
    }
    sort(c,c+(n*m));
    int max=c[n*m-1];
    int ct=0;
    for(int i=0;i<n*m;i++)
        if(max==c[i])
        ct++;
    cout<<ct;
}
