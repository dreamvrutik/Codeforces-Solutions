#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    int ct=1;
    if(n%2==0)
    {
        cout<<n/2;
    }
    else
    {
        cout<<((n-1)/2)-n;
    }
}
