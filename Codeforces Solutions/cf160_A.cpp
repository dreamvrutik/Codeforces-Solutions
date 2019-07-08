#include<bits/stdc++.h>
using namespace std;
//#define int long long int;

int main()
{
    int n,s=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        {cin>>a[i];s+=a[i];}
    sort(a,a+n);
    int j=n-2,f=0;
    int sa,sb;
    if(n==1)
        cout<<"1";
    sa=a[n-1];
    sb=s-sa;
    while(f!=1)
    {
        if(sa<=sb)
        {
            sa+=a[j];
            sb-=a[j];
            j--;
        }
        else
            f=1;
    }
    if(n!=1)
    cout<<n-j-1;
}
