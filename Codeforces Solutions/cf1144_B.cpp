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
    int cte=0,cto=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            cte++;
        else
            cto++;
    }
    sort(a,a+n);
    int flag;
    if(cte>cto)
    {
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]%2==0)
            {
                flag=0;
                a[i]=-1;
                break;
            }
        }
    }
    else
    {
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]%2==1)
            {
                flag=1;
                a[i]=-1;
                break;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            if(flag==0)
            {
                if(a[j]%2==1 && a[j]!=-1)
                {
                    a[j]=-1;
                    flag=1;
                    break;
                }
            }
            else
            {
                if(a[j]%2==0 && a[j]!=-1)
                {
                    a[j]=-1;
                    flag=0;
                    break;
                }
            }
        }
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=-1)
            sum+=a[i];

    }
    cout<<sum;
}
