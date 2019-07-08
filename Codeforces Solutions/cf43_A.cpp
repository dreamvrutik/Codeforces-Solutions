#include <bits/stdc++.h>
using namespace std;
int main() {
    string c,d;
    int gc=0,gd=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;
        if(i==0)
        {
            c=x;
            gc++;
        }
        else
        {
            if(c!=x)
            {
                d=x;
                gd++;
            }
            else
            {
                gc++;
            }
        }
    }
    if(gc>gd)
        cout<<c;
    if(gd>gc)
        cout<<d;
}
