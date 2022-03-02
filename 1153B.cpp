#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,l,n,m,a,b;
    vector<ll>v,v1;
    cin>>n>>m>>k;
    for(i=0; i<m; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(i=0; i<n; i++)
    {
        cin>>b;
        v1.push_back(b);
    }
    ll arr[n+4][m+5];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(arr[i][j])
            {
                cout<<min(v[j],v1[i])<<" ";
            }
            else
               cout<<"0 ";
        }
        cout<<endl;
    }
}