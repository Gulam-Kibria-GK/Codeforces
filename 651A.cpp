#include<bits/stdc++.h>
using namespace std;
int ab(int *a,int *b)
{
    int i,c=0;
    while(*a-*b>2)
    {
        *a-=2;
        *b+=1;
        c++;
    }
    return c;

}
int ba(int *a,int *b)
{
    int i,c=0;
    while(*b-*a>2)
    {
        *b-=2;
        *a+=1;
        c++;
    }
    return c;

}
int main()
{
    int i,n,x=0,c=0,y=0,a,b;
    cin>>a>>b;
    /*if(a>b)
        x=ab(&a,&b);
    else if(b>a)
        y=ba(&a,&b);
    c=x+y;*/
    for(i=0; ; i++)
    {
        if(a>=b)
        {
            a-=2;
            b+=1;
        }
        else if(b>a)
        {
            a+=1;
            b-=2;
        }
        c++;
        if(i==0)
        {
            if(a<0 || b<0)
            {
                c=0;
            }
        }
        if(a<=0 || b<=0)
        {
            break;
        }
    }
    cout<<c<<endl;
}