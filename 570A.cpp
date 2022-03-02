#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll int i,j,n,x,mx2,f2;
    cin>>n>>x;
    ll int ar[105][105],ar2[105]= {};
    for(i=0; i<x; i++)
    {
        ll int mx=0,f=1;
        for(j=0; j<n; j++)
        {
            cin>>ar[i][j];
            if(mx<ar[i][j])
            {
                f=j+1;
                mx=ar[i][j];
            }
        }
        ar2[f]++;
    }
    mx2=0;
    f2=1;
    for(i=1; i<=n; i++)
    {
        if(mx2<ar2[i])
        {
            mx2=ar2[i];
            f2=i;
        }
    }
    cout<<f2<<endl;
    return 0;
}