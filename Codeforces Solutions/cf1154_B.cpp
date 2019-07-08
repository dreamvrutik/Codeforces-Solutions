#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define forn(i,o,n) for(int i=o;i<n;i++)
#define int long long
#define endl "\n"
#define mod 1000000007
using namespace std;
int po[101],s[101];
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
bool isPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
         return 0;
               //   cout<<i;
    }
    return 1;
}
int factorial(int n)
{
    int i=1;
    for(int j=1;j<=n;j++)
        i*=j;
    return i;
}
int32_t main()
{
    IOS
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int d=0;
    int flag=0,x=a[0];
    for(int i=0;i<n;i++)
    {
        if(x!=a[i])
            flag=1;
    }
    if(flag==0)
    {
        cout<<0;
        return 0;

    }
    d++;
    x=0;
    int y=0,z=0;
    int cfx=0,cfy=0,cfz=0,mf=0,ans;
    for(d=1;d<=100;d++)
    {
        int ct=0;
        x=a[0];
        y=a[0]+d;
        z=a[0]-d;
        for(int i=0;i<n;i++)
        {
            if(a[i]==x || a[i]+d==x || a[i]-d==x)
            {
                ct++;
            }
            else
                break;

        }
        if(ct==n)
        {
            cout<<d;
            return 0;
        }
        ct=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==y || a[i]+d==y || a[i]-d==y)
            {
                ct++;
            }
            else
                break;

        }
        if(ct==n)
        {
            cout<<d;
            return 0;
        }
        ct=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==z || a[i]+d==z || a[i]-d==z)
            {
                ct++;
            }
            else
                break;

        }
        if(ct==n)
        {
            cout<<d;
            return 0;
        }
        ct=0;
    }
    cout<<-1;
}
