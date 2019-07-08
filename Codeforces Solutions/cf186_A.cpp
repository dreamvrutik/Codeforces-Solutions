#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int ct=0;
    int la=a.length();
    int lb=b.length();
    if(la!=lb)
        cout<<"NO";
    else
    {
        int x[la];
        for(int i=0;i<la;i++)
            x[i]=(int)a[i]-96;
        sort(x,x+la);
        int y[lb];
        for(int i=0;i<lb;i++)
            y[i]=(int)b[i]-96;
        sort(y,y+lb);
        int f=1;
        for(int i=0;i<la;i++)
        {
            if(x[i]!=y[i])
                f=0;
        }
        if(f==0)
            cout<<"NO";
        else
        {
            for(int i=0;i<a.length();i++)
    {
        if(a[i]!=b[i])
            ct++;
    }
    if(ct==0 || ct==2)
    {
        if(a.length()==b.length())
            cout<<"YES";
        else
            cout<<"NO";
    }
    else
        cout<<"NO";
        }
    }

}
