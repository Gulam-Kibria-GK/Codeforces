#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i,j,a,b,f=0,c,ma=1,mi=2,d,n=10000;
    cin>>a>>b>>c>>d;
    for(i=0;i<n;i++)
    {
        ma=b+a*i;
        for(j=0;j<n;j++)
        {
            mi=d+c*j;
            if(mi==ma)
            {
                f=1;
                 break;
            }

            else if(mi>ma)
             break;
        }
        if(f==1)
            break;
    }
   if(f==1)
    cout<<ma<<endl;
   else
    cout<<"-1"<<endl;
   return 0;
}