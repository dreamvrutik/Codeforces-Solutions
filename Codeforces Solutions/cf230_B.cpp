#include <bits/stdc++.h> 
#define endl "\n"
#define int long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
bool isPrime(int x)
{
    if(x==1)
        return 0;
    for(int i=2;i*i<=x;i++)
        if(x%i==0)
            return 0;
    return 1;        
}
int32_t main() {
    IOS;
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(ceil(sqrt(n))==floor(sqrt(n))&&isPrime(sqrt(n)))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
	return 0;
}