#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define int long long
#define endl "\n"
#define double long double
#define mod 1000000007
#define pb push_back
using namespace std;
void pairsort(int a[], int b[], int n)
{
    pair<int, int> pairt[n];
    for (int i = 0; i < n; i++)
    {
        pairt[i].first = a[i];
        pairt[i].second = b[i];
    }

    sort(pairt, pairt + n);

    for (int i = 0; i < n; i++)
    {
        a[i] = pairt[i].first;
        b[i] = pairt[i].second;
    }
}

int32_t main()
{
    IOS
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        int x[m];
        int maxx=0;
        for(int j=0;j<m;j++)
        {
            cin>>x[j];
            if(x[j]>maxx)
                maxx=x[j];
        }
        a[i]=m;
        b[i]=maxx;
    }
    pairsort(b,a,n);
    int ans=0;
    int s=b[n-1];
    for(int i=0;i<n-1;i++)
    {
        ans+=(s-b[i])*a[i];
    }
    cout<<ans;
}