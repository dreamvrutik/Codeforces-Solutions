#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,m;
   cin>>n>>m;
   int x=0;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           if(i%2==0)
           {
               cout<<"#";
           }
           else
           {
               if(x==0)
               {
                   if(j!=m-1)
                    cout<<".";
                   else
                    cout<<"#";
               }
               else
               {
                   if(j==0)
                    cout<<"#";
                   else
                    cout<<".";
               }
           }
       }
       if(i%2==1)
       {
           if(x==1)
            x=0;
           else
            x=1;
       }
       cout<<endl;
   }
}
