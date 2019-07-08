#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    long long int k,n,s,p,npp;
    cin>>k>>n>>s>>p;
    if(n<=s)
        npp=1;
    else
    {
        npp=(n/s);
        if(n%s!=0)
            npp++;
    }
    npp=npp*k;
    if(npp%p==0)
        npp=npp/p;
    else
    {
        if(npp<p)
            npp=1;
        else
        {
            npp=(npp/p)+1;
        }
    }
    cout<<npp;
}
