#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,d,d2,x,y,x1,y1,x2,y2,x3,y3,f=1;;
    cin>>x>>y>>x1>>y1;
    if(x==x1)
    {
        d=abs(y-y1);
        x2=x+d;
        y2=y;
        x3=x1+d;
        y3=y1;
    }
    else if(y==y1)
    {
        d2=abs(x-x1);
        x2=x;
        y2=y+d2;
        x3=x1;
        y3=y1+d2;
    }
    else if(abs(y1-y)==abs(x-x1))
    {
        x2=x;
        y2=y1;
        x3=x1;
        y3=y;
    }
    else
    {
        f=0;
    }
    if(f==0)
    {
        cout<<"-1"<<"\n";
    }
    else
    {
        cout<<x2<<" "<<y2<<" "<<x3<<" "<<y3<<"\n";
        return 0;
    }
}