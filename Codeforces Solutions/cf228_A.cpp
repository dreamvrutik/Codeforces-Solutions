#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[4];
    for(int i=0;i<4;i++)
        a[i]=-1;
    int k=0;
    for(int i=0;i<4;i++)
    {
        long long int x;
        cin>>x;
        int f=1;
        for(int j=0;j<i;j++)
            {
                if(a[j]==x)
                {
                    f=0;
                }
                else
                {

                }
            }
            if(f==1)
                a[k++]=x;
    }
    int d=0;
    for(int i=0;i<4;i++)
        if(a[i]!=-1)
            d++;
    cout<<4-d;
}
