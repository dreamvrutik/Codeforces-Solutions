#include <bits/stdc++.h>
#define int long long
using namespace std;


int32_t main()
{
    string s;
    cin>>s;
    int ob=0,cb=0,c1=0,c2=0,ct=0,c1i=-1,c2i=-1;
    int l=s.length()-1;
    for(int i=0;i<s.length();i++)
    {
        if(ob==0 && c1==0)
        {
            if((int)s[i]==91)
            {
                ob=1;
            }
        }
        else if(ob==1 && c1==0)
        {
            if((int)s[i]==58)
            {
                c1=1;
                c1i=i;
            }
        }
        if(cb==0 && c2==0)
        {
            if((int)s[l-i]==93)
                cb=1;
        }
        else if(cb==1 && c2==0)
        {
            if((int)s[l-i]==58)
            {
                c2=1;
                c2i=l-i;
            }
        }
    }
    for(int i=c1i;i<c2i;i++)
    {
        if((int)s[i]==124)
            ct++;
    }

    if(ob+cb+c1+c2==4  && c1i!=c2i && c1i<c2i)
    {
        cout<<ct+4;
    }
    else
    {
        cout<<-1;
    }
}
