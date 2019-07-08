#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    int ans,b,c;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            int a;
            cin>>a;
            if(a==1)
            {
                b=i;
                c=j;
            }
        }
    }
    x=2-b;
    if(x<0)
        x*=-1;
    y=2-c;
    if(y<0)
        y*=-1;
    ans=x+y;

    cout<<ans;
}
