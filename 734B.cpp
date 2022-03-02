#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k2,k3,k5,k6,min=0,min2=0,valu,i,sum=0;
    cin>>k2>>k3>>k5>>k6;
    if(k2!=0 && k6!=0 && k5!=0)
    {
        min=k2;
        if(min>k5)
        {
            min=k5;
        }
        if(min>k6)
        {
            min=k6;
        }
    }
    if(k3!=0)
    {
        valu=k2-min;
        if(valu!=0)
        {
            min2=valu;
            if(min2>k3)
            {
                min2=k3;
            }
        }
    }
    for(i=0;i<min;i++)
    {
        sum+=256;
    }
    for(i=0;i<min2;i++)
    {
        sum+=32;
    }
    cout<<sum<<"\n";
    return 0;
}