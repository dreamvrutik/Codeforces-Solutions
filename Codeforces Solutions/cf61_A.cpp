#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2,s3;
    cin>>s1;
    cin>>s2;
    int l=s1.length();
    for(int i=0;i<l;i++)
    {
        if(s1[i]==s2[i])
            cout<<0;
        else
            cout<<1;
    }
}
