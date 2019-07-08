#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n];
   int o=0,e=0;
   for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            e++;
        else
            o++;
    }
    if(e==1)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                cout<<i+1;
                break;
            }
        }
    }
    if(o==1)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==1)
            {
                cout<<i+1;
                break;
            }
        }
    }


}
