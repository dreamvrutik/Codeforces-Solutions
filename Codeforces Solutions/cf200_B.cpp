#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float a[n],s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i]/100;
    }
    s=s/n;
    cout<<s*100;
}
