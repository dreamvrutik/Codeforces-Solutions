#include<bits/stdc++.h>
using namespace std;
//#define int long long int;
int fi(char c , int p,string s)
{
    int x=-1;
    for(int i=p;i<s.length();i++)
    {
        if(s[i]==c)
        {
            x=i;
            break;
        }
    }
    return x;
}
int main()
{
    string s;
    cin>>s;
    int p[5];
    p[0]=fi('h',0,s);
    p[1]=fi('e',p[0]+1,s);
    p[2]=fi('l',p[1]+1,s);
    p[3]=fi('l',p[2]+1,s);
    p[4]=fi('o',p[3]+1,s);
    int l=1,m=1;
    for(int i=0;i<4;i++)
    {
        if(p[i]<p[i+1])
        {

        }
        else
        {
            l=0;
        }
        if(p[i]==-1)
            m=0;
    }
    if(p[4]==-1)
        m=0;
    if(l==1 & m==1)
        cout<<"YES";
    else
        cout<<"NO";
}
