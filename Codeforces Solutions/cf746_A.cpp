#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int i=1,s=-1;
    while(i<=a)
    {
        if(b>=(2*i) && c>=(4*i))
        {
            s=i+(2*i)+(4*i);
            i++;
            continue;
        }
        else
        {
            break;
        }
    }
    if(s==-1)
        cout<<0;
    else
        cout<<s;
}
