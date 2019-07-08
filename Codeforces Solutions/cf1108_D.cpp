
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
    string s;
    cin>>s;
    string x=s;
    for(int i=1;i<n;i++)
    {
        if(x[i]==x[i-1])
        {
            if(x[i]=='R')
            {
                if(x[i+1]=='B')
                    x[i]='G';
                else if(x[i+1]=='G')
                    x[i]='B';
                else
                    x[i]='B';
            }
            else if(x[i]=='G')
            {
               if(x[i+1]=='B')
                    x[i]='R';
                else if(x[i+1]=='R')
                    x[i]='B';
                else
                    x[i]='B';
            }
            else if(x[i]=='B')
            {
                if(x[i+1]=='R')
                    x[i]='G';
                else if(x[i+1]=='G')
                    x[i]='R';
                else
                    x[i]='R';
            }
        }
    }
    int ct=0;
    for(int i=0;i<n;i++)
        if(s[i]!=x[i])
            ct++;
    cout<<ct<<endl<<x;
}
