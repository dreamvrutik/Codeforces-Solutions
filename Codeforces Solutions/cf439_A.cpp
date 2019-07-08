#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,d,c=0;
   cin>>n>>d;
   int x=(n-1)*10;
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
       x+=a[i];
   }
   if(x>d)
    cout<<-1;
   else
   {
       c+=(n-1)*2;
       if(x<d)
       {
           c+=(d-x)/5;
       }
       cout<<c;
   }

}
