#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    int a[n][2];
    long long int lc0=0,rc0=0,lc1=0,rc1=0;
    for(long long int i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1];
        if(a[i][0]==0)
            lc0++;
        else if(a[i][0]==1)
            lc1++;
        if(a[i][1]==0)
            rc0++;
        else if(a[i][1]==1)
            rc1++;
    }
    long long steps=0;
    if(lc1>lc0)
    {
        steps+=lc0;
    }
    else
        steps+=lc1;
    if(rc1>rc0)
    {
        steps+=rc0;
    }
    else
        steps+=rc1;
    cout<<steps;
}
