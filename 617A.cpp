#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,s=0,s1,p=0,p1,d=0,ans=1,sum,d1,f=0,e=0,e1;
    cin>>n;
    if(n>5)
    {
        s=n/5;
        s1=n%5;
        if(s1==4)
        {
            p=1;
        }
        else if(s1==3)
        {
            d=1;
        }
        else if(s1==2)
        {
            e=1;
        }
        else if(s1==1)
        {
            f=1;
        }
        //else;
        sum=s+p+d+e+f;
        cout<<sum<<endl;
    }
    else if(n<=5)
    {
        cout<<ans<<endl;
    }
    return 0;
}