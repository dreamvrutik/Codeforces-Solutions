#include<bits/stdc++.h>
using namespace std;
int checkd(int n)
{
    int a[4];
    for(int i=0;i<4;i++)
        a[i]=-1;
    int f=1;
    int j=0;
    while(n!=0)
    {
        a[j++]=n%10;
        n/=10;
    }
    for(int i=0;i<4;i++)
    {
        for(int q=0;q<4;q++)
        {
            if(q!=i)
            {
                if(a[q]==a[i])
                {
                    f=0;
                    break;
                }
            }
        }
        if(f==0)
            break;
    }
    return f;
}
int main()
{
    int n;
    cin>>n;
    n++;
    int c,f=1;
    while(f==1)
    {
        c=checkd(n);
        if(c==1)
        {
            f=0;
        }
        else
        {
            f=1;
            n++;
        }
    }
    cout<<n;
}
