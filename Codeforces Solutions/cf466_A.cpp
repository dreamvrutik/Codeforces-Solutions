#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int min=0;
    int x=n/m;
    min+=x*b;
    x=n%m;
    if((x*a)>b)
        min+=b;
    else
        min+=x*a;
    if(n*a<min)
        min=n*a;
    cout<<min;
}
