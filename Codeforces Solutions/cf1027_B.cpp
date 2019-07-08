#include<iostream>
#include<string>
using namespace std;
int main()
{
    long long int n,q;
    cin>>n>>q;

    long long int ans[q];


    for(long long int i=0;i<q;i++)
    {
        long long int x,y,k=0,cto=0;;
        cin>>x>>y;
        if(n%2==0)
        {
            k=(n/2)*(x-1)+((y/2)+(y%2));
            if((x+y)%2==1)
            {
                k+=(n*n)/2;
            }
        }
        if(n%2==1)
        {
            if(x%2==0)
            {
                cto=(x/2);
            }
            if(x%2==1)
            {
                cto=(x-1)/2;
            }
            k=(n/2)*(x-1)+cto+((y/2)+(y%2));
            if((x+y)%2==1)
            {
                k+=(n*n)/2;
                if(x%2==1)
                {
                    k++;
                }
            }
        }
        ans[i]=k;
    }
    for(long long int i=0;i<q;i++)
    {
        cout<<ans[i]<<endl;
    }

}
