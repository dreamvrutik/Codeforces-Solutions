#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,x,y;
    cin>>a>>b>>x>>y;
    long long int gcd=__gcd(x,y);
    x=x/gcd;
    y=y/gcd;
    long long int ct=0;
    long long int a1=a/x;
    long long int a2=b/y;
    if(x<=a && y<=b)
    {
        long long int h=a1<a2?a1:a2;
        ct=h;
    }
    cout<<ct;
}
