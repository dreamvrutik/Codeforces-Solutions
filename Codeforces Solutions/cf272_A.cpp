#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n];
   int s=0;
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
       s+=a[i];
   }
   int ct=0;
   for(int i=s+1;i<=s+5;i++)
   {
       if(i%(n+1)==1)
       {

       }
       else
        ct++;
   }
   cout<<ct;
}
