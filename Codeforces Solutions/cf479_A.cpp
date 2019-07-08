#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m,k;
    cin>>n>>m>>k;
    int j=n*(m+k);
    if(n*m*k>j)
    j=n*m*k;
    if((n+m)*k>j)
    j=(n+m)*k;
    if(n+m+k>j)
    j=n+m+k;
    cout<<j;
}
