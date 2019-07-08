#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++)
    {
        int c,b;
        cin>>c>>b;
        if(i==0)
            a[i]=b;
        if(i>0)
            a[i]=a[i-1]-c+b;
    }
    int max=a[0];
    for(int i=0;i<n;i++)
        if(max<a[i])
        max=a[i];
    cout<<max;
}
