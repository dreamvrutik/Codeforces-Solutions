#include<iostream>
#include<stdlib.h>
#define int long long
using namespace std;


int32_t main()
{
    int n;
    cin>>n;
    int sum=n*(n+1)/2;
    if(sum%2==0)
    {
        cout<<0;
    }
    else
    {
        cout<<1;
    }
}
