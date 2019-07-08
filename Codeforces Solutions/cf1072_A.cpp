#include<bits/stdc++.h>
using namespace std;
int isp(int n)
{
    int f=1;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            f=0;
            break;
        }
    }
    return f;
}
void pairsort(int a[], int b[], int n)
{
    pair<int, int> pairt[n];

    // Storing the respective array
    // elements in pairs.
    for (int i = 0; i < n; i++)
    {
        pairt[i].first = a[i];
        pairt[i].second = b[i];
    }

    // Sorting the pair array.
    sort(pairt, pairt + n);

    // Modifying original arrays
    for (int i = 0; i < n; i++)
    {
        a[i] = pairt[i].first;
        b[i] = pairt[i].second;
    }
}
int main()
{
    long long int w,h,k;
    cin>>w>>h>>k;
    long long int ct=0,i=1,j=0;
    while(k>0)
    {
        if(j%2==0)
        {
            long long int x,y;
        x=w-4*(i-1);
        y=h-4*(i-1);
        ct+=2*x;
        ct+=2*y-4;
        k--;
        i++;
        }
        j++;
    }
    cout<<ct;
}
