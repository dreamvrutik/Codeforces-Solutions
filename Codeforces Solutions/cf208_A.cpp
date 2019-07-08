#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int d=0;
    int l=s.length();
    char c[l];
    for(int i=0;i<l;i++)
        c[i]='~';
    int j=0;
    for(int i=0;i<l;i++)
    {
        if(s[i]=='W')
        {
            if(s[i+1]=='U'&&s[i+2]=='B')
            {
                i++;
                i++;
                c[j++]='~';
            }
            else
            {
                c[j++]=s[i];
            }
        }
        else
            c[j++]=s[i];

    }
    for(int i=0;i<l;i++)
    {
        if(d==0)
        {
            if(c[i]!='~')
               {
                 cout<<c[i];
                 d++;
               }
        }
        else
        {
            if(c[i]!='~')
                {cout<<c[i];d++;}
            else
                {
                    if(c[i-1]!='~')
                        cout<<" ";
                }
        }

    }
}
