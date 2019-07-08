#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n][2];
    for(int i=0;i<n;i++)
        cin>>a[i][0]>>a[i][1];
    int ctu=0,ctd=0,ctl=0,ctr=0,tc=0;
    for(int i=0;i<n;i++)
    {
        ctu=ctd=ctl=ctr=0;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i][0]==a[j][0] && a[i][1]<a[j][1])
                    ctd=1;
                if(a[i][0]==a[j][0] && a[i][1]>a[j][1])
                    ctu=1;
                if(a[i][0]>a[j][0] && a[i][1]==a[j][1])
                    ctl=1;
                if(a[i][0]<a[j][0] && a[i][1]==a[j][1])
                    ctr=1;
            }
        }
        if(ctd+ctu+ctl+ctr==4)
            tc++;
    }
    cout<<tc;
}
