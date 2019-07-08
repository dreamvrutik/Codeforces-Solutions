#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    char q[n];
    for(int i=0;i<n;i++)
        cin>>q[i];
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(q[j]=='B' && q[j+1]=='G')
            {
                char x=q[j];
                q[j]=q[j+1];
                q[j+1]=x;
                j++;
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<q[i];
}
