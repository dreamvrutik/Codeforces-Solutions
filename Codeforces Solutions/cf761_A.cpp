#include<bits/stdc++.h>
using namespace std;
int main()
{
        int a,b;
        cin>>a>>b;
        int diff=a-b;
        if(a==0 && b==0)
        {
            cout<<"NO";
        }
        else
        {

        if(diff==-1 || diff==0 || diff==1)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        }
}
