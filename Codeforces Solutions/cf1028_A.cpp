#include<iostream>
using namespace std;
int main()
{
    int n,m,ct=0,ini=0,inj=0,li=0,lj=0;
    cin>>n>>m;
    char c[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>c[i][j];
            if(c[i][j]=='B')
            {
                ct++;
                if(ct==1)
            {
                ini=i;
                inj=j;
            }
                li=i;
                lj=j;
            }

        }
    }
    int ci=(ini+li+2)/2;
    int cj=(inj+lj+2)/2;
    cout<<ci<<" "<<cj;

}
