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
    int a,b,n;
    cin>>a>>b>>n;
    a*=10;
    int rem=a%b;
    int t=b-rem;
    if(t<=9)
    {
        a+=t;
        cout<<a;
        n--;
        while(n--)
            cout<<0;
    }
    else if(rem==0)
    {
        cout<<a;
        n--;
        while(n--)
            cout<<0;
    }
    else
        cout<<-1;
}
