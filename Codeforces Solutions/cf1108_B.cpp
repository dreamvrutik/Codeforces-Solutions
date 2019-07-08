
#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define int long long
#define de double
#define PI 3.14159265358
#define endl '\n'
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
    int n;
    cin>>n;
    int a[n];
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    int y=*max_element(a,a+n);
    int x;
    map<int, int>::iterator itr;
    for (itr = m.begin(); itr != m.end(); ++itr) {
        if(y%itr->first==0)
            m[itr->first]--;
    }
    for (itr = m.begin(); itr != m.end(); ++itr) {
        if(itr->second==1)
            x=itr->first;
    }
    cout<<x<<" "<<y;
}
