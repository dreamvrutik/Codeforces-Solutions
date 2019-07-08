#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    int x[26],y[26];
    for(int i=0;i<26;i++)
    {
        x[i]=0;y[i]=0;
    }
    for(int i=0;i<a.length();i++)
    {
        x[(int)a[i]-65]++;
    }
    for(int i=0;i<b.length();i++)
    {
        x[(int)b[i]-65]++;
    }
    for(int i=0;i<c.length();i++)
    {
        y[(int)c[i]-65]++;
    }
    int flag=1;
    for(int i=0;i<26;i++)
    {
        if(y[i]<x[i])
            flag=0;
        else if(y[i]>x[i])
            flag=0;
    }
    if(flag==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
