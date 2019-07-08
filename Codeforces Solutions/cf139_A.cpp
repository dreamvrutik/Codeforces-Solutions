#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[7],pw=0;
    for(int i=0;i<7;i++)
    {
        cin>>a[i];
        pw+=a[i];
    }
    int f=0,j=0;
    while(f!=1)
    {
        int x=j%7;
        n-=a[x];
        if(n<=0)
        {
            cout<<x+1;
            f=1;
        }
        j++;
    }
}
