#include<bits/stdc++.h>
#pragma GCC optimize ("-O2")
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define endl "\n"
#define int long long
#define double long double
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
double modd(double x)
{
    if(x>=0)
        return x;
    return -1*x;
}
int dp(int y)
{
    int s=0;
    while(y!=0)
    {
        int r=y%10;
        s+=r;
        y/=10;
    }
    if(s%10==0)
        return 1;
    return 0;
}
int sd(int n)
{
    int s=0;
    while(n!=0)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}
int mod = 1e9+7;
int modexpo(int x,int p){
    int res = 1;
    x = x%mod;
    while(p){
        if(p%2)
            res = res * x;
        p >>= 1;
        x = x*x % mod;
        res %= mod;
    }
    return res;
}
int32_t main()
{
	IOS;
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int left=min(a,min(b,c));
    int right=max(a,max(b,c));
    int middle;
    if((left==a && right==b)|| (left==b && right==a))
        middle=c;
    else if((left==a && right==c)||(left==c && right==a))
        middle=b;
    else if((left==b && right==c)||(left==c && right==b))
        middle=a;
    int ans=0;
    if(middle-left>=d)
    {
        ans+=0;
    }
    else
    {
        int x=middle-left;
        ans+=d-x;
        left=middle-d;
    }
    if(right-middle>=d)
    {
        ans+=0;
    }
    else
    {
        int x=right-middle;
        ans+=d-x;
        right=middle+d;
    }
    cout<<ans;
}
