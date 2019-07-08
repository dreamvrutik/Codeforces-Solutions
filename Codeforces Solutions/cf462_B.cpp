#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
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
int modd(int x)
{
    if(x>=0)
        return x;
    return -1*x;
}

int32_t main()
{
    IOS
    int n,k;
    cin>>n>>k;
    string x;
    cin>>x;
    int a[26]={0};
    for(int i=0;i<n;i++)
    {
        a[x[i]-65]+=1;
    }
    sort(a,a+26);
    int ans=0;
    for(int i=25;i>=0;i--)
    {
        if(a[i]<=k)
        {
            ans+=a[i]*a[i];
            k-=a[i];
        }
        else
        {
            ans+=k*k;
            k-=k;
        }
        if(k==0)
            break;
    }
    cout<<ans;
}
