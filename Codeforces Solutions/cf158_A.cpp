#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    cin>>k;
    int sc[n];
    for(int i=0;i<n;i++)
    {
        cin>>sc[i];
    }
    int min=0;
    int cases=0;
    for(int i=1;i<=n;i++)
    {
        cases+=i;
    }
    for(int i=0;i<cases;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(sc[j+1]>sc[j])
            {
                int temp;
                temp=sc[j+1];
                sc[j+1]=sc[j];
                sc[j]=temp;
            }


        }
    }
    min=sc[k-1];
    int ct=0;
    for(int i=0;i<n;i++)
    {
        if(sc[i]>=min && sc[i]>0)
            ct++;
    }
    cout<<ct;
}
