#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define forn(i,o,n) for(int i=o;i<n;i++)
#define int long long
#define endl "\n"
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
int32_t main()
{
    IOS
    int x;
    cin>>x;
    int y=x+1;
    double z=log(y)/log(2);
    int a[1000];
    int si=0;
    if(ceil(z)==floor(z))
    {
        cout<<0;
        return 0;
    }

    else
    {
        int flag=0,ct=1,cy=0;
        int s=ceil(log(x)/log(2));
        s=pow(2,s);
        while(flag==0 && ct<=40)
        {
            if(ct%2==1)
            {
                int ni=-1,mv=1e9;
                for(int i=0;i<=30;i++)
                {
                    int j=pow(2,i);
                    j--;
                    j=(x^j);
                    int dis=s-j;
                    if(mv>dis && dis>0)
                    {
                        mv=dis;
                        ni=i;
                    }
                }
                int temp=pow(2,ni);
                temp--;
                x=(x^temp);
                a[si++]=ni;
            }
            else
            {
                x++;
            }
            //cout<<x<<" ";
            y=x+1;
            z=log2(y);
            int dd = floor(z);
            int ddd = ceil(z);
           // cout<<dd<<" "<<ddd<<endl;
            if(dd == ddd)
            {
                flag=1;
                break;
            }
            ct+=1;
        }
        cout<<ct<<endl;
        for(int i=0;i<si;i++)
        {
            cout<<a[i]<<" ";
        }
    }
}
