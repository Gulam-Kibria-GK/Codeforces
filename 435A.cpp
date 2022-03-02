#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,m,f,j,c=0,d=0,ans,sum=0;
    cin>>n>>m;
    int a[n];
    f=m;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        //sum+=ar[i];
    }
    for(i=0;i<n;i++)
    {
        c=c+a[i];
        if(c<=m)
        {

        }
        else
        {
            d++;
            c=a[i];
        }
    }
    ans=d+1;
    cout<<ans<<endl;
    return 0;
}