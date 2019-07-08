#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define forn(i,o,n) for(int i=o;i<n;i++)
#define int long long
#define endl "\n"
#define mod 1000000007
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
int32_t main()
{
    IOS
    int n;
    cin>>n;
    int a[n];
    int s=0;
    int so[n],se[n];
    int aso[n],ase[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
        if(i==0)
        {
            se[i]=a[i];
            so[i]=0;
            aso[i]=0;
            ase[i]=0;
        }
        else
        {
            if(i%2==0)
            {
                se[i]=se[i-1]+a[i];
                aso[i]=aso[i-1]+a[i];
                ase[i]=ase[i-1];
                so[i]=so[i-1];
            }
            else
            {
                se[i]=se[i-1];
                so[i]=so[i-1]+a[i];
                ase[i]=ase[i-1]+a[i];
                aso[i]=aso[i-1];
            }
        }
    }
    int ct=0;
    for(int i=0;i<n;i++)
    {
        int s1=0,s2=0;
        if(i!=0)
        {
            s1+=so[i-1];
            s2+=se[i-1];
        }
        s1+=se[n-1]-se[i];
        s2+=so[n-1]-so[i];
        if(s1==s2)
            ct++;
    }
    cout<<ct;
}
