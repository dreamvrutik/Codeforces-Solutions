#include<bits/stdc++.h>
using namespace std;
int checkl(long long int n)
{
    int f=1;
    if(n==0)
        f=0;
    while(n!=0)
    {
        int x=n%10;
        if(x==4 || x==7)
        {
            n/=10;
        }
        else
        {
            f=0;
            break;
        }
    }
    return f;
}
int main()
{
    long long int n;
    cin>>n;
    long long int ct=0;
    while(n!=0)
    {
        if(n%10==4 || n%10==7)
            ct++;
        n/=10;
    }
    int f=checkl(ct);
    if(f==1)
        cout<<"YES";
    else
        cout<<"NO";
}
