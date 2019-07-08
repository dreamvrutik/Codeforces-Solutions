#include<bits/stdc++.h>
using namespace std;
int isp(int n)
{
    int f=1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            f=0;
            break;
        }
    }
    return f;
}

int main()
{
    long long int n;
    cin>>n;
    long long int a[n];
    long long int index,f=0,m;
    for(long long int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i==0)
        {
            if(a[i]!=0)
            {
                f=1;
                index=i;
            }
            else
                m=a[i];
        }
        else
        {
            if(f==0)
            {
                if(a[i]>m+1)
                {
                    f=1;
                    index=i;
                }
                else
                {
                    if(a[i]==m+1)
                        m=a[i];
                }
            }
        }

    }
    if(f==0)
        cout<<-1;
    else
        cout<<index+1;
}
