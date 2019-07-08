#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a[n][2],s[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1];
        s[i]=a[i][0]+a[i][1];
    }
    sort(s,s+n);
    cout<<s[n-1];
}
