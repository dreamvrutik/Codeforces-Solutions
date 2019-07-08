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
int modd(int x)
{
    if(x>=0)
        return x;
    return -1*x;
}
int dp(int y)
{
    int s=1;
    while(y!=0)
    {
        int r=y%10;
        s*=r;
        y/=10;
    }
    return s;
}
int dg(int n)
{
    int f=1;
    while(n!=0)
    {
        int r=n%10;
        n/=10;
        if(r==0||r==1)
        {

        }
        else
        {
            f=0;
            break;
        }
    }
    return f;
}
int32_t main()
{
    IOS
    int n;
    cin>>n;
    int x=log10(n);
    int ct=0;
    ct=pow(2,x)-1;
    x=log10(n);
    string t="";
    for(int i=0;i<=x;i++)
        t+='1';
    int m=stoi(t);
    for(int i=pow(10,x);i<=min(m,n);i++)
    {
        if(dg(i))
            ct++;
    }
    cout<<ct;
}
