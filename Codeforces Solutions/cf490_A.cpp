#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n];
   int x[3];
   for(int i=0;i<3;i++)
    x[i]=0;
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
       x[a[i]-1]++;
   }
   sort(x,x+3);
   int w=x[0];
   if(w==0)
    cout<<w;
   else
    cout<<w<<endl;
   while(w>0)
   {

       for(int i=0;i<n;i++)
       {
           if(a[i]==1)
           {
               cout<<i+1<<" ";
               a[i]=0;
               break;
           }
       }
       for(int i=0;i<n;i++)
       {
           if(a[i]==2)
           {
               cout<<i+1<<" ";
               a[i]=0;
               break;
           }
       }
       for(int i=0;i<n;i++)
       {
           if(a[i]==3)
           {
               cout<<i+1<<" ";
               a[i]=0;
               break;
           }
       }
       w--;
       cout<<endl;
   }
}
