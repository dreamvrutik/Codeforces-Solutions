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

int a[100005];
int32_t main()
{
    IOS
    int n,k;
	cin>>n>>k;
	for(int i=1; i<=n; i++)
		cin>>a[i];
	int len=0,ans=0;
	for(int i=1; i<=n; i++)
	{
		if(a[i]!=a[i-1])
			len++;
		else
			len=1;
		ans=max(ans,len);
	}
	cout<<ans<<endl;
}