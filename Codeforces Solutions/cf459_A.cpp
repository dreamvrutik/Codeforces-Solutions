#include <bits/stdc++.h>
using namespace std;
int main() {
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int x,y;
    x=x2-x1;
    y=y2-y1;

    if(x==y&&x>0&&y>0)
    {
        cout<<x1<<" "<<y1+y<<" "<<x1+x<<" "<<y1;
    }
    else if(x==y&&x<0&&y<0)
        cout<<x2<<" "<<y2-y<<" "<<x2-x<<" "<<y2;
    else if(-x==y&&y<0)
        cout<<x1<<" "<<y1+y<<" "<<x2<<" "<<y2-y;
    else if(-x==y&&x<0)
        cout<<x1+x<<" "<<y1<<" "<<x2-x<<" "<<y2;
    else if(x==0&&y>0)
        cout<<x1+y<<" "<<y1<<" "<<x2+y<<" "<<y2;
    else if(x==0&&y<0)
     cout<<x1-y<<" "<<y1<<" "<<x2-y<<" "<<y2;
    else if(x<0&&y==0)
     cout<<x1<<" "<<y1-x<<" "<<x2<<" "<<y2-x;
    else if(x>0&&y==0)
     cout<<x1<<" "<<y1+x<<" "<<x2<<" "<<y2+x;
    else cout<<-1;
	return 0;
}
