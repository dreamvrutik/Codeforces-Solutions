#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n][2];
   for(int i=0;i<n;i++)
   {
       cin>>a[i][0]>>a[i][1];
   }
   int ct=0;
   for(int i=0;i<n;i++)
   {
       int x=a[i][0];
       for(int j=0;j<n;j++)
       {
           if(i!=j)
           {
               int y=a[j][1];
               if(x==y)
                ct++;
           }
       }
   }
   cout<<ct;
}
