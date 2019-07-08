#include<iostream>
using namespace std;
int main()
{
    long long int n,h,a,b,k;
    cin>>n>>h>>a>>b>>k;
    if(a<1 || a>h)
    {
        return 0;
    }
    if(b<1 || b>h)
    {
        return 0;
    }
    long long int ta[k],fa[k],tb[k],fb[k],ans[k];
    for(int x=0;x<k;x++)
    {
        cin>>ta[x]>>fa[x]>>tb[x]>>fb[x];
        if(ta[x]==tb[x])
        {
            ans[x]=0;
            ans[x]=fb[x]-fa[x];
            if(ans[x]<0)
                ans[x]*=-1;
        }
        else
        {


        if(fa[x]>=a && fa[x]<=b)
        {
            ans[x]=0;
            ans[x]=tb[x]-ta[x];
            if(ans[x]<0)
                ans[x]*=-1;
            int add=fb[x]-fa[x];
            if(add<0)
                add*=-1;
            ans[x]=ans[x]+add;
        }
        else
        {
            if(fa[x]<a)
            {
                ans[x]=0;
                ans[x]+=a-fa[x];
                int add1=tb[x]-ta[x];
                if(add1<0)
                    add1*=-1;
                ans[x]+=add1;
                int add2=fb[x]-a;
                if(add2<0)
                    add2*=-1;
                ans[x]+=add2;

            }
            if(fa[x]>b)
            {
                ans[x]=0;
                ans[x]+=fa[x]-b;
                int add1=tb[x]-ta[x];
                if(add1<0)
                    add1*=-1;
                ans[x]+=add1;
                int add2=fb[x]-b;
                if(add2<0)
                    add2*=-1;
                ans[x]+=add2;

            }
        }
        }
    }
    for(int x=0;x<k;x++)
    {
        cout<<ans[x]<<endl;
    }

}
