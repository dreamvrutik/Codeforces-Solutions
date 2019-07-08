#include<bits/stdc++.h>
#pragma GCC optimize ("-O3")
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define endl "\n"
#define int long long
#define double long double
const int N=100005;
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
    if(n<2)
        return 0;
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
int nCr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
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
int sd(int n)
{
    int s=0;
    while(n!=0)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}
int mod=1e9+7;
int modexpo(int x, unsigned int y)
{
    int res = 1;      // Initialize result
    x = x % mod;  // Update x if it is more than or
                // equal to p
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % mod;
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % mod;
    }
    return res;
}
int ps(int n)
{
    double x=(double)n;
    if(ceil(sqrt(x))==floor(sqrt(x)))
        return 1;
    return 0;
}
vector<int>adj[N];
vector<int>cost;
int src,des,w;
vector<int>vis;
vector<int>dist,res,parent;
int n,k;
int p=1;
void dfs(int x)
{
    vis[x]=1;
    for(int i=0;i<adj[x].size();i++)
    {
        if(!vis[adj[x][i]])
        {
            dfs(adj[x][i]);
        }
    }
}
void bfs()
{
    int s=1;
    queue<int>q;
    q.push(s);
    parent[s]=1;
    vis[s]=1;
    while(!q.empty())
    {
        s=q.front();
        q.pop();
        for(int i=0;i<adj[s].size();i++)
        {
            if(!vis[adj[s][i]])
            {
                q.push(adj[s][i]);
                vis[adj[s][i]]=1;
                parent[adj[s][i]]=s;
            }
        }
    }
}
vector<int>a;
map<int,int>m;
int32_t main()
{
    IOS;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>w;
        a.push_back(w);
    }
    sort(a.begin(),a.end());
    swap(a[n-1],a[n-2]);
    for(int i=0;i<n;i++)
    {
         if(i==0)
        {
            if(a[0]>=a[1]+a[n-1])
            {
                cout<<"NO";
                return 0;
            }
        }
        else if(i==n-1)
        {
            if(a[i]>=a[i-1]+a[0])
            {
                cout<<"NO";
                return 0;
            }
        }
        else
        {
            if(a[i]>=a[i-1]+a[i+1])
            {
                cout<<"NO";
                return 0;
            }
        }
    }
        cout<<"YES"<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
