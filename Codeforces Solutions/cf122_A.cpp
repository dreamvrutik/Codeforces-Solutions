#include<bits/stdc++.h>
using namespace std;
//#define int long long int;
int isl(int n)
{
    int f=1;
    while(n!=0)
    {
        int r;
        r=n%10;
        n/=10;
        if(r==4 || r==7)
        {
            f=1;
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
    int n,f=0;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(isl(i))
        {
            if(n%i==0)
            {
                f=1;
                break;
            }
        }
    }
    if(f==0)
        cout<<"NO";
    else
        cout<<"YES";
}
