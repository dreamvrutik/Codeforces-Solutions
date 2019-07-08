#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int min,max;
    if(n%2==0)
    {
        min=n/2;
        max=n;
    }
    if(n%2==1)
    {
        min=n/2;
        min++;
        max=n;
    }
        int f=0,c=0;
        for(int i=min;i<=max;i++)
        {
            if(i%m==0)
            {
                if(f==0)
                {
                    f=1;
                    c=i;
                }
            }
        }
        if(f==1)
            cout<<c;
        else
            cout<<-1;

}
