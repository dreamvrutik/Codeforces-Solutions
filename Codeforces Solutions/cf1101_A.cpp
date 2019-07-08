#include <bits/stdc++.h>
#define int long long
using namespace std;


int32_t main()
{
    int n;
    cin>>n;
    int ans[n];
    for(int i=0;i<n;i++)
    {
        int l,r,d;
        cin>>l>>r>>d;
        int x=d;
        if(d<l)
        {
            x=d;
        }
        else
        {
            if(r%d==0)
            {
                x=r+d;
            }
            else
            {
                x=r+(d-(r%d));
            }
        }
        ans[i]=x;
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<endl;
    }
}
