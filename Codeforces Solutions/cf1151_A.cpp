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
    string s;
    int n;
    cin>>n;
    cin>>s;
    int ct=0;
    for(int i=0;i<n-3;i++)
    {
        string x=s;
        int tc=0;
        char a1=x[i];
        char a2=x[i+1];
        char a3=x[i+2];
        char a4=x[i+3];
        if(a1!='A')
        {
            int t1=a1-'A';
            int t2='Z'-a1+1;
            tc+=min(t1,t2);
        }
        if(a2<'C')
        {
            tc+='C'-a2;
        }
        else if(a2>'C')
        {
            int t1=a2-'C';
            int t2='Z'-a2+3;
            tc+=min(t1,t2);
        }
        if(a3<'T')
        {
            int t1='T'-a3;
            int t2=a3-'A'+1+'Z'-'T';
            tc+=min(t1,t2);
        }
        else if(a3>'T')
        {
            tc+=a3-'T';
        }
        if(a4<'G')
        {
            tc+='G'-a4;
        }
        else if(a4>'G')
        {
            int t1=a4-'G';
            int t2='Z'-a4+1+'G'-'A';
            tc+=min(t1,t2);
        }
        if(i==0)
            ct=tc;
        if(tc<ct)
            ct=tc;
    }
    cout<<ct;
}
