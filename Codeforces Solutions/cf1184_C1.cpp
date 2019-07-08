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
lli n,t,m,k=1,i,j,l,f=0,h=0,sum=0,ans=0,s,b;

    cin>>n;
    m=4*n+1;
    lli x[m],y[m],yy[m],cx[51],cy[51];
    forr(i,0,51){
        cx[i]=0;cy[i]=0;              
    }
    forr(i,0,m){
        cin>>x[i]>>y[i];
        yy[i]=y[i]; 
        cx[x[i]]++;
        cy[y[i]]++;
    }
    pairsort(x,y,m);
    sort(yy,yy+m);
    lli xs,xe,ys,ye;
    xs=0;xe=m-1;
    if(cx[x[m-1]]>=2 && cx[x[0]]<2)
        xs++;
    else xe--;
    f=x[xe]-x[xs]+1;
    ys=0;ye=m-1;
    if(cy[yy[m-1]]>=2 && cy[yy[0]]<2)
        ys++;
    else ye--;


    forr(i,0,m){
        if(y[i]>yy[ye] || y[i]<yy[ys]){
            cout<<x[i]<<" "<<y[i]<<endl;
            return 0;
        }
        if(x[i]>x[xe] || x[i]<x[xs]){
            cout<<x[i]<<" "<<y[i]<<endl;
            return 0;
        } 
        if(x[i]>x[xs] && x[i]<x[xe] && y[i]!=yy[ys] && y[i]!=yy[ye]){
            cout<<x[i]<<" "<<y[i]<<endl;
            return 0;
        } 
        if(y[i]>yy[ys] && y[i]<yy[ye] && x[i]!=x[xs] && x[i]!=x[xe]){
            cout<<x[i]<<" "<<y[i]<<endl;
            return 0;
        }              
    }
    
return 0;

}