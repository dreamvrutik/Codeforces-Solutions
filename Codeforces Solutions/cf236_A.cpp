#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<s.length();i++)
    {
        for(int j=i+1;j<s.length();j++)
        {
            if(s[j]==s[i])
                s[j]='~';
        }
    }
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='~')
            c++;
    }
    if(c%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
}
