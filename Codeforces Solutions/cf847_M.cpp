#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int b[n],a,d,f=0;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        if(i==0)
            a=b[i];
        if(i==1)
            d=b[i]-b[i-1];
        if(i>0)
        {
            int de=b[i]-b[i-1];
            if(de==d);
            else
                f=1;
        }
    }
    if(f==0)
        cout<<a+n*d;
    else
        cout<<b[n-1];
}
