#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>=0)
        cout<<n;
    else
    {
        if(n<=-1 && n>=-10)
        {
            n=0;
        }
        else
        {
            int a,b;
        a=(n*-1)%10;
        b=((n*-1)/10)%10;
        if(a>b)
        {
            int x=n*-1;
            x=x/10;
            n=x*-1;
        }
        else
        {
            int x=n*-1;
            x=x/10;
            x=x-b+a;
            n=x*-1;
        }
        }
        cout<<n;
    }
}
