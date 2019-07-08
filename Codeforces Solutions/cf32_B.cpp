#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string c;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='.')
        {
            c+='0';
        }
        else if(s[i]=='-')
        {
            if(s[i+1]=='-')
            {
                c+='2';
                i++;
            }
            else if(s[i+1]=='.')
            {
                c+='1';
                i++;
            }
        }
    }
    cout<<c;
}
