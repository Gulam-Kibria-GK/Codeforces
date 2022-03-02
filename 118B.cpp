#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j,a,b=1,c,d=1,e,f=-1,g,h;
    cin>>n;
    a=n;
    for(i=0;i<=n;i++)
    {
        for(j=1;j<=a;j++)
        {
            //if(j!=a)
            cout<<"  ";
        }
        a--;
        c=0;
        for(j=0;j<b;j++)
        {
            cout<<c++;
            if(j!=b-1)
            {
                cout<<" ";
            }
        }
        b++;
        f++;
        e=f;
        for(j=1;j<d;j++)
        {
            cout<<" "<<--e;
        }
        e=0;
        d++;
        cout<<endl;

    }
    a=n,b=1,f=n,e=0,d=n-2+1;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=b; j++)
        {
            cout<<"  ";
        }
        b++;
        c=0;
        for(j=1; j<=a; j++)
        {
            cout<<c++;
            if(j!=a)
            {
                cout<<" ";
            }
        }
        a--;
        d-=1;
        e=d;
        for(j=1; j<f; j++)
        {
            cout<<" "<<e--;
        }
        f--;
        cout<<endl;
    }
    return 0;

}