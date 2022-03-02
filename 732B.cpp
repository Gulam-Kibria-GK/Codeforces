#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a,b,sum,sum2=0;
    cin>>a>>b;
    int ar[a+3];
    for(i=0;i<a;i++)
    {
        cin>>ar[i];
    }
    for(i=1;i<a;i++)
    {
        sum=ar[i]+ar[i-1];
        if(sum<b)
        {
            sum2+=b-sum;
            ar[i]=b-ar[i-1];
        }
    }
    cout<<sum2<<endl;
    for(i=0;i<a;i++)
    {
        cout<<ar[i];
        if(i!=a)
        {
            cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}