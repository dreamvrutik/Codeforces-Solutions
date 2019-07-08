#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define int long long
#define de double
#define PI 3.14159265358
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
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
         return 0;
      //   cout<<i;
    }
    return 1;
}

int32_t main(){
    IOS;
    int n,k;
    cin>>n>>k;
    int a[2*n];
    if(k>n)
        k=n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        a[n+i]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        int x=a[i];
        int y=*max_element(a+i,a+(i+k));
        if(i==0)
            y=*max_element(a,a+(k+1));
        int z=*max_element(a,a+i);
        if(x>=z && x>=y)
        {
            cout<<x;
            break;
        }
    }
}
