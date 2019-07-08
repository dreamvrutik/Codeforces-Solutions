#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int flag[t];
    for(int i=0;i<t;i++)
    {
        flag[i]=0;
        int n,x=0;;
        cin>>n;
        char a[n];
        cin>>a;
        for(int j=0;j<n/2;j++)
        {
            int diff=int(a[j])-int(a[n-1-j]);
            if(diff<0)
            {
                diff*=-1;
            }
            if(diff==0 || diff==2)
            {
                x++;
            }
        }
        if(x==n/2)
        {
            flag[i]=1;
        }
    }
    for(int i=0;i<t;i++)
    {
        if(flag[i]==1)
        {
            cout<<"YES"<<endl;
        }
        if(flag[i]==0)
        {
            cout<<"NO"<<endl;
        }
    }
}
