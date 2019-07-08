#include <bits/stdc++.h>
#define lli  long long int 
#define forr(i,a,n) for(i=a;i<n;i++)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
#define pi 3.1415926536
#define mod 1000000007
#define INF 10000000000
#define mkp make_pair
#define N 100005
#define M 1000005

//rev-sort sort(a,a+n,greater<int>());

using namespace std;

lli par[N],x[M],y[M],w[M],pos[M],sizee[N];

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
    if(a[m]>=x){
        c=m;
        h=m-1;
    }
    else l=m+1;
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


void init(lli n){
    lli i;
    forr(i,0,n+1){
        par[i]=i;
        sizee[i]=1;
    }
}

lli root(lli x) {
    while(x!=par[x]){
        par[x]=par[par[x]];
        x=par[x];
    }
    return x;
}

void Union(lli x, lli y){
    lli ra = root(x);
    lli rb = root(y);
    if(ra==rb)
        return;
    if(sizee[ra]<sizee[rb]){
        par[ra]=rb;
        sizee[rb]+=sizee[ra];
    }
    else{
        par[rb]=ra;
        sizee[ra]+=sizee[rb];
    }
}


int main(){
IOS;
lli n,t,m,k=1,i,j,l,f=0,h=0,sum=0,ans=0,s,b;

	cin>>n>>m;
	init(n+1);
	forr(i,0,m){
		cin>>x[i]>>y[i]>>w[i];
		pos[i]=i;		
	}
	pairsort(w,pos,m);
	k=0;
	if(m==n-1){
		cout<<1000000000;
		return 0;
	}
	forr(i,0,m){
		if(pos[i]!=0 && root(x[pos[i]])!=root(y[pos[i]])){
			Union(x[pos[i]],y[pos[i]]);
			sum+=w[i];
			k++;
			if(k==n-1) break;
		}
	}

	lli sum1=0;
	init(n+1);
	Union(x[0],y[0]);
	forr(i,0,m){
		if(pos[i]==0) j=i;				
	}
	sum1+=w[j];
	k=1;
	forr(i,0,m){
		if(pos[i]!=0 && root(x[pos[i]])!=root(y[pos[i]])){
			Union(x[pos[i]],y[pos[i]]);
			sum1+=w[i];
			k++;
			if(k==n-1) break;
		}	
	}
	if(sum1>sum)
		cout<<w[j]-(sum1-sum);
	else cout<<sum-sum1+w[j];
return 0;

}