#include <bits/stdc++.h>
#define int long long
using namespace std;


int32_t main()
{
    int n,x,y;
    cin>>n>>x>>y;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int c=0;
    if(x-y>0)
    {
        cout<<n;
    }
    else
    {
        int t=0;
        int i=0;
        while(i<n)
        {
            if(t%2==0)
            {

                if(a[i]==0 || a[i]>x)
                {
                    i++;
                }

                else if(a[i]<=x && a[i]!=0)
                {
                    a[i]=0;
                    c++;
                    i++;
                    t++;
                }
            }
            else
            {
                if(a[i]==0 || a[i]>x)
                {
                    i++;
                }
                else if(a[i]<=x && a[i]!=0)
                {
                    a[i]+=y;
                    t++;
                }
            }
        }
        cout<<c;

    }
}
