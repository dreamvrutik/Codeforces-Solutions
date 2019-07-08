#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int l,ctl=0,ctu=0;
    string s;
    cin>>s;
    l=s.length();
    for(int i=0;i<l;i++)
    {
        if(65<=int(s[i]) && int(s[i])<=90)
            ctu++;
        if(97<=int(s[i])&& int(s[i])<=122)
            ctl++;
    }
    if(ctu>ctl)
        transform(s.begin(), s.end(), s.begin(),(int (*)(int))toupper);
    else
        transform(s.begin(), s.end(), s.begin(),(int (*)(int))tolower);
    cout<<s;
}
