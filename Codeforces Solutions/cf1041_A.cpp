#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ct=0;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            int temp;
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
     for(int i=1;i<n;i++)
     {
         if(a[i]-a[i-1]==1)
         {

         }
         else
         {
             ct+=a[i]-a[i-1]-1;
         }
     }
     cout<<ct;
}
