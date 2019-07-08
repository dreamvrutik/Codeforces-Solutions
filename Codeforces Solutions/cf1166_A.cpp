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
int modd(int x)
{
    if(x>=0)
        return x;
    return -1*x;
}
int32_t main()
{
    IOS
    int n;
    cin>>n;
    string a[n];
    string c1[n],c2[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ct1=0,ct2=0;
    for(int i=0;i<n;i++)
    {
        int f1=0,f2=0;
        char x=a[i][0];
        for(int j=0;j<ct1;j++)
        {
            if(x==c1[j][0])
                f1++;
        }
        if(f1==0)
        {
            c1[ct1++]=a[i];
        }
        else
        {
            for(int j=0;j<ct2;j++)
            {
                if(x==c2[j][0])
                    f2++;
            }
            if(f2==0)
            {
                c2[ct2++]=a[i];
            }
            else
            {
                if(f1>f2)
                    c2[ct2++]=a[i];
                else
                    c1[ct1++]=a[i];
            }
        }
    }
    int cc1=0,cc2=0;
    for(int i=0;i<ct1;i++)
    {
        for(int j=0;j<ct1&&j!=i;j++)
        {
            if(c1[i][0]==c1[j][0])
                cc1++;
        }
    }
    for(int i=0;i<ct2;i++)
    {
        for(int j=0;j<ct2&&j!=i;j++)
        {
            if(c2[i][0]==c2[j][0])
                cc2++;
        }
    }
    cout<<cc1+cc2;
}
