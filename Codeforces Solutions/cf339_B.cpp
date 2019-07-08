#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    cin>>n>>m;
    long long int a[m];
    long long int p,s=0;
    for(long long int i=0;i<m;i++)
    {
        cin>>a[i];
        if(i==0)
        {
            s+=(a[i]-1);
        }
        else
        {
            p=a[i-1];
            if(a[i]>=p)
                s+=a[i]-p;
            else
            {
                s+=n-p+a[i];
            }
        }
    }
    cout<<s;
}
