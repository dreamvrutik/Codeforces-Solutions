#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int l=s.length();
    int a[l];
    for(int i=0;i<l;i++)
        a[i]=4;
    int j=0;
    for(int i=0;i<l;i++)
    {
        if(i%2==0)
            a[j++]=(int)s[i]-48;
    }
    sort(a,a+l);
    for(int i=0;i<l;i++)
    {
        if(a[i]>3)
            break;
        else
            cout<<a[i];
        if(a[i+1]<=3)
            cout<<"+";
    }
}
