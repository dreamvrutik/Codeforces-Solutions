#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,s1;
    cin>>s>>s1;
    int ans;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]<s1[i])
        {
            ans=-1;
            break;
        }
        else if(s[i]>s1[i])
        {
            ans=1;
            break;
        }
        else
        {
            ans=0;
        }
    }
    cout<<ans;
}
