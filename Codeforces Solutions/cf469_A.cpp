#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        a[i]=0;
    int p;
    cin>>p;
    int x[p];
    for(int i=0;i<p;i++)
    {
        cin>>x[i];
        a[x[i]-1]=1;
    }
    int q;
    cin>>q;
    int y[q];
    for(int i=0;i<q;i++)
    {
        cin>>y[i];
        a[y[i]-1]=1;
    }
    int f=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=1)
            f=0;
    }
    if(f==1)
    {
        cout<<"I become the guy.";
    }
    else
    {
        cout<<"Oh, my keyboard!";
    }
}
