#include <bits/stdc++.h>
using namespace std;
int main()
{
        int a[26];
        for(int i=0;i<26;i++)
            a[i]=0;
        char c='~';
        while(c!='}')
        {
            cin>>c;
            if((int)c>=97 && (int)c<=122)
            {
                a[(int)c-97]=1;
            }
        }
        int ct=0;
        for(int i=0;i<26;i++)
            if(a[i]==1)
            ct++;
        cout<<ct;
}
