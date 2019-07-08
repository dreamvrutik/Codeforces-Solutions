#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define int long long
#define endl "\n"
#define double long double
#define mod 1000000007
#define pb push_back

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
    int ct=0;
    while(y!=0)
    {
        y/=10;
        ct++;
    }
    return ct;
}
int rev(int n)
{
    int rev=0;
    while(n!=0)
    {
        int rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    return rev;
}
int32_t main()
{
    IOS
    int n;
    cin>>n;
    n*=2;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int s1=0,s2=0;
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(i<n/2)
        {
            s1+=a[i];
        }
        else
            s2+=a[i];
    }
    if(s1==s2)
    {
        s1-=a[0];
        s2+=a[0];
        s2-=a[n-1];
        s1+=a[n-1];
        if(s1==s2)
        {
            cout<<-1;
            return 0;
        }
        else
        {
            int t=a[0];
            a[0]=a[n-1];
            a[n-1]=t;
            for(int i=0;i<n;i++)
                cout<<a[i]<<" ";
        }
    }
    else
    {
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
    }
}
