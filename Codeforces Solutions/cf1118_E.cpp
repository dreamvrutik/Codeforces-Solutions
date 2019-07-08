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
    int n,k;
    cin>>n>>k;
    if(k*(k-1)<n)
    {
        cout<<"NO";
        return 0;
    }
    int m=1;
    int b=1;
    int j=0;
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++)
    {
        if(b+m>k)
        {
            b++;
            m=1;
        }
        if(i%2==0)
        {
            cout<<b<<" "<<b+m<<endl;
        }
        else
        {
           cout<<b+m<<" "<<b<<endl;
           m++;
        }
    }
}
