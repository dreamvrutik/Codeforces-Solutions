#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,amazing;
    cin>>n;
    amazing=0;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i>=1)
        {
            int f=1,f1=1;
            for(int j=0;j<i;j++)
            {
                if(a[i]>a[j]);
                else
                    {f=0;}
            }
            if(f==0);
            else
                amazing++;
            for(int j=0;j<i;j++)
            {
                if(a[i]<a[j]);
                else
                {
                    f1=0;
                }
            }
            if(f1==0);
            else
                amazing++;
        }

    }
    cout<<amazing;
}
