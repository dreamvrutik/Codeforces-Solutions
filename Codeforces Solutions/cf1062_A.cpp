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
int n,x,ans;
int a[1001];
int32_t main()
{
    IOS
    cin>>n;
    a[0]=0;
    a[n+1]=1001;
    for (int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    x=0;
    for (int i=1; i<=n; i++)
    {
        if (a[i]==a[i-1]+1 && a[i]==a[i+1]-1) x++;
        else{
            ans=max(ans, x);
            x=0;
        }
    }
    ans=max(ans, x);
    cout<<ans;
}