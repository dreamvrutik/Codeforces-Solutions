#include<bits/stdc++.h>
#define int long long
using namespace std;
int log1(int n,int b)
{
    int c=0;
    while(n%b==0)
    {
        n=n/b;
        c++;
    }
    if(n==1)
    {
        return c;
    }
    else
        return -1;
}
int_fast32_t main()
{
    int n,m;
    cin>>n>>m;
    int c=log1(m,n);
    if(c==-1)
        cout<<"NO";
    else
    {
        cout<<"YES"<<endl<<c-1;
    }
}
