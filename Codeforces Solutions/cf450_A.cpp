#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int f=0;
    int x;
    while(1)
    {
        f=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                a[i]-=m;
                x=i+1;
            }
        }
        for(int i=0;i<n;i++)
        {
            //cout<<a[i]<<" ";
            if(a[i]<=0)
                f++;
        }
        if(f==n)
            break;
        //cout<<endl;
    }
    cout<<x;
}
