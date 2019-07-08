#include<iostream>
using namespace std;
int main()
{
    int no;
    cin>>no;
    int marks[no][4];
    int sum[no];

    for(int i=0;i<no;i++)
    {
        int s=0;
        for(int j=0;j<4;j++)
        {

          cin>>marks[i][j];
          s+=marks[i][j];
        }
        sum[i]=s;

    }
    int maximum=sum[0];
    int idmax;
    for(int i=0;i<no;i++)
    {
        if(maximum<sum[i])
        {
            maximum=sum[i];
            idmax=i;
        }
    }
    if(idmax==0)
    {
        cout<<endl<<1<<endl;
    }
    else
    {
        int tmark=sum[0];
        int rankt=1;
        for(int i=0;i<no;i++)
        {
            if(tmark<sum[i])
            {
                rankt++;
            }

        }
        cout<<rankt;
    }
}
