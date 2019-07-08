#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   int a,b,c;
   cin>>n;
   a=n/3;
   if(a%3==0)
   {
       a=1;
       n=n-1;
       b=n/2;
       if(b%3==0)
        b=1;
       c=n-b;
       if(c%3==0)
       {
           c--;
           a++;
       }
   }
   else
   {
       b=a;
       c=n-a-b;
       if(c%3==0)
       {
           int q=a%3;
           if(q==1)
           {
               c--;
               a++;
           }
           else
           {
               c++;
               a--;
           }
       }
   }
   cout<<a<<" "<<b<<" "<<c;
}
