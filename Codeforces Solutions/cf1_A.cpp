#include<iostream>
using namespace std;
int main()
{
    long long int n,m,a;
    cin>>n;
    cin>>m;
    cin>>a;
    long long int ctn=0,ctm=0;
    if(n%a==0)
    {
        ctn+=n/a;
    }
    if(n%a!=0)
    {
        ctn+=n/a;
        ctn++;
    }
    if(m%a==0)
    {
        ctm+=m/a;
    }
    if(m%a!=0)
    {
        ctm+=m/a;
        ctm++;
    }
    cout<<ctn*ctm<<endl;
}
