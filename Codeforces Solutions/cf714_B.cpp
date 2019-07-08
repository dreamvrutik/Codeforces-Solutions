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
	IOS;
    int n;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    if(s.size()>3)
        cout<<"NO";
    else if(s.size()<3)
        cout<<"YES";
    else
    {
        int k=0;
        int a[3];
        for(auto it=s.begin();it!=s.end();++it)
        {
            a[k++]=*it;
        }
        sort(a,a+3);
        if(a[0]+a[2]==2*a[1])
            cout<<"YES";
        else
            cout<<"NO";
    }
}
