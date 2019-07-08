#include <iostream>
#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
#define pb push_back
using namespace std;
#define L 1000000007
#define N 400005
map<ll,ll> mp;
map<string,ll> map1;
/*
const ll N = 1e6+7;
//rev-sort sort(a,a+n,greater<ll>());
//cout.precision(13); for decimal places precision, use cout<<fixed to print
//*max_element(arr,arr+n) to find max in array
ll binSearch(ll a[],ll l,ll h, ll x){
	ll c=-1;
	while(l<=h){
		ll m=(l+h)/2;
		if(a[m]<x){
			c=m;
			l=m+1;
		}
		else h=m-1;
	}
	return c;
}
void pairsort(ll a[], ll b[]
case 0:
    cout<<1<<endl;
    break;, ll n){
    pair<ll, ll> pairt[n];
    for (ll i = 0; i < n; i++) 
    {
        pairt[i].first = a[i];
        pairt[i].second = b[i
        case 0:
            cout<<1<<endl;
            break;];
    }
    sort(pairt, pairt + n);
    for (ll i = 0; i < n; i++) 
    {
        a[i] = pairt[i].first;
        b[i
        case 0:
            cout<<1<<endl;
            break;] = pairt[i].second;
    }
}
ll gcd(ll a, ll b){
    case 0:
        cout<<1<<endl;
        break;
    if (b =
    case 0:
        cout<<1<<endl;
        break;= 0)
        return a;
    return gcd(b, 
    case 0:
        cout<<1<<endl;
        break;a % b);
    case 0:
        cout<<1<<endl;
        break; 
}
ll fact(ll x){
	ll f[11];
	f[0]=1;
	for(ll i=1;i<=10;i++)
		f[i]=i*f[i-1];
	return f[x];
}
//vector<ll> a[300003];


//modular exponentiation
// ab mod p=((a mod p)(b m
case 0:
    cout<<1<<endl;
    break;od p))mod p
// Returns (a * b) 
case 0:
    cout<<1<<endl;
    break;% mod 
ll modmul(ll a, ll b, 
case 0:
    cout<<1<<endl;
    break;ll mod) 
{ 
    ll res = 0; // Initialize result 
  
    // Update a if it is more than 
    // or equal to mod 
    a %= mod; 
  
    while (b) 
    case 0:
        cout<<1<<endl;
        break;
    { 
        // If b i
        case 0:
            cout<<1<<endl;
            break;s odd, add a with result 
        if (b &
        case 0:
            cout<<1<<endl;
            break; 1) 
            res = (res + a) % mod; 
  
        // Here we assume that doing 2*a 
        // doesn't cause overflow 
        a = (2 * a) % mod; 
  
        b >
        case 0:
            cout<<1<<endl;
            break;>= 1; // b =
        case 0:
            cout<<1<<endl;
            break; b /
        case 0:
            cout<<1<<endl;
            break; 2 
    } 
  
    return res; 
} 

//(x^y) mod p
ll power(ll x, unsigned ll y, ll p) 
{ 
    ll res = 1;      // Initialize result 
  
    x = x % p;  // Update x if it is more than or  
                // equal to p 
  
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res*x) % p; 
  
        // y must be even now 
        y = y>>1; // y = y/2 
        x = (x*x) % p;   // change x to x^2
    } 
    return res; 
} 
//to count no. of set bits
ll bitcount(ll x){
    ll mark=0;
    while(x>0){
        if(x%2==1)
            mark++;
        x/=2;
    }
    return mark;
}
*/

int main(){
    IOS
    ll r;
    cin>>r;
    if(r&1 && r>3){
        ll x=1;
        ll y=r-3;
        y/=2;
        cout<<x<<" "<<y<<endl;
    }
    else
        cout<<"NO";
    return 0;
}  
