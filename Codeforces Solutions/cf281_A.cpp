#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a=(int)s[0];
    if(a>=97 && a<=122)
    {
        a=a-97+65;
    }
    s[0]=a;
    cout<<s;
}
