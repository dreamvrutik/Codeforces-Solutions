#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int s=0;
    for(int i=0;i<n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int d=a+b+c;
        if(d>=2)
            s++;
    }
    cout<<s;
}
