#include<bits/stdc++.h>
using namespace std;
int isp(int n)
{
    int f=1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            f=0;
            break;
        }
    }
    return f;
}

int main()
{
    long long int x,y,z,t1,t2,t3;
    cin>>x>>y>>z>>t1>>t2>>t3;
    long long int ts,te,d1,d2;
    d1=(z-x);
    if(d1<0)
        d1*=-1;
    d2=x-y;
    if(d2<0)
        d2*=-1;
    te=(d1)*t2+d2*t2+3*t3;
    ts=d2*t1;
    if(te<=ts)
        cout<<"YES";
    else
        cout<<"NO";

}
