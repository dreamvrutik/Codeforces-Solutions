#include <bits/stdc++.h>
#define lli  long long int 
#define forr(i,a,n) for(i=a;i<n;i++)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
#define pi 3.1415926536
#define mod 1000000007
#define INF 10000000000
#define mkp make_pair

//rev-sort sort(a,a+n,greater<int>());

using namespace std;


lli fact(lli n){
if(n==1 || n==0)
    return 1;
return n*fact(n-1);
}

int isPrime(lli n){
lli i,j;
forr(i,2,sqrt(n)+1){
    if(n%i==0)
        return 0;
}
return 1;
}

lli modexpo(lli x,lli p){
lli res = 1;
x = x%mod;
while(p){
    if(p%2)
        res = res * x;
    p >>= 1;
    x = x*x % mod;
    res %= mod;
}
return res;
}

lli binSearch(lli a[],lli l,lli h, lli x){
lli c=-1;
while(l<=h){
    lli m=(l+h)/2;
    if(a[m]<=x){
        c=m;
        l=m+1;
    }
    else h=m-1;
}
return c;
}

void pairsort(lli a[], lli b[], lli n){
pair<lli, lli> pairt[n];
for (lli i = 0; i < n; i++) 
{
    pairt[i].first = a[i];
    pairt[i].second = b[i];
}
sort(pairt, pairt + n);
for (lli i = 0; i < n; i++) 
{
    a[i] = pairt[i].first;
    b[i] = pairt[i].second;
}
}

lli mulmod(lli a, lli b) 
{ 
lli res = 0;
a = a % mod; 
while (b > 0) 
{ 
    if (b % 2 == 1) 
        res = (res + a) % mod; 

    a = (a * 2) % mod; 
    b /= 2; 
} 

return res % mod; 
}



int main(){
IOS;
lli n,t,m,k=1,i,j,l,f=0,h=0,sum=0,x,y,ans=0,s,b;

    cin>>s>>b;
    lli a[s],d[b],g[b],ps[b];
    forr(i,0,s){
        cin>>a[i];              
    }

    forr(i,0,b){
        cin>>d[i]>>g[i];    
    }
    pairsort(d,g,b);
    forr(i,0,b){
        if(i) ps[i]=ps[i-1]+g[i];
        else ps[i]=g[i];                
    }

    forr(i,0,s){
        lli ind=binSearch(d,0,b-1,a[i]);
        if(ind==-1) cout<<0<<" ";
        else cout<<ps[ind]<<" ";                
    }
return 0;

}