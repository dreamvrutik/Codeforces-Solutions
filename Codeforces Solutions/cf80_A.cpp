#include<bits/stdc++.h>
using namespace std;
int isp(int n)
{
    int flag=1;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
            flag=0;
    }
    return flag;
}
int nextp(int n)
{
    int flag=0;
    n++;
    while(flag!=1)
    {
        flag=isp(n);
        if(flag==0)
            n++;
    }
    return n;
}
int main()
{
    int m,n;
    cin>>m>>n;
    int x=nextp(m);
    if(x==n)
        cout<<"YES";
    else
        cout<<"NO";
}
