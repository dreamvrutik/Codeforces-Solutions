#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define int long long
#define endl "\n"
#define double long double
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
int32_t main()
{
    IOS
    int n;
    cin>>n;
    int a[n];
    int ct=0;
    int ct4=0,ct8=0,ct15=0,ct16=0,ct23=0,ct42=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==4)
        {
            ct4++;
        }
        else if(a[i]==8)
        {
            if(ct4-ct8>=1)
                ct8++;
        }
        else if(a[i]==15)
        {
            if(ct8-ct15>=1)
                ct15++;
        }
        else if(a[i]==16)
        {
            if(ct15-ct16>=1)
                ct16++;
        }
        else if(a[i]==23)
        {
            if(ct16-ct23>=1)
                ct23++;
        }
        else
        {
            if(ct23-ct42>=1)
                ct42++;
            if(ct4 && ct8 && ct15 && ct16 && ct23 && ct42)
            {
                ct++;
                ct4--;
                ct8--;
                ct15--;
                ct16--;
                ct23--;
                ct42--;
            }
        }

    }
    int ks=ct*6;
    int ans=n-ks;
    cout<<ans;

}
