#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++)
        cin>>a[i];
    sort(a,a+m);
    int min=a[n-1]-a[0];
    int j=0;
    while(n-1+j<=m-1)
    {
        int diff=a[n-1+j]-a[j];
        if(min>diff)
            min=diff;
        j++;
    }
    cout<<min;
}
