#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        int l=a[i].length();
        if(l<=10)
            cout<<a[i]<<endl;
        else
        {
            cout<<a[i][0]<<l-2<<a[i][l-1]<<endl;
        }
    }
}
