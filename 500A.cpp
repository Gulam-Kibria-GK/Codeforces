#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k=0,l,n,m;
    cin>>n>>m;
    int v[n+3];
    for(i=1; i<n; i++)
    {
        cin>>v[i];
    }
    for(i=1; i<n;i)
    {
        i+=v[i];
        if(i==m)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        else if(i>m)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}