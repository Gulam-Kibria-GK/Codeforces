#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,d,a[1000],valu,valu2,sum=0;
    cin>>n>>d;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        sum+=(10+a[i]);
    }
    sum=sum-10;
    //cout<<sum<<"\n\n";
    if(sum>d)
    {
        cout<<"-1"<<"\n";
    }
    else
    {
        valu=(n-1)*2;
        valu2=d-sum;
        if(valu2>=5)
        {
            for(i=5; i<=valu2; i+=5)
            {
                valu=valu+1;
            }
        }
        cout<<valu<<"\n";
    }
    return 0;
}