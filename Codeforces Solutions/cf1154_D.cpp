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
    int n,b,ac;
    cin>>n>>b>>ac;
    int a[n];
    int ca=ac;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int d=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            if(ac>0)
            {
                ac--;
                d++;
            }
            else
            {
                if(b>0)
                {
                    b--;
                    d++;
                }
                else
                    break;
            }
        }
        else
        {
            if(ac==ca)
            {
                ac--;
                d++;
            }
            else
            {
                if(b>0)
                {
                    b--;
                    ac++;
                    d++;
                }
                else
                {
                    if(ac>0)
                    {
                        ac--;
                        d++;
                    }
                    else
                        break;
                }
            }
        }
    }
    cout<<d;
}
