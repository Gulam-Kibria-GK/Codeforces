#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll i,j,k,n,ma=0;
    cin>>n;
    vector<ll>v;
    for(i=0; i<n; i++)
    {
        cin>>k;
        v.push_back(k);
    }
    for(i=0; i<n; i++)
    {
        if(v[i]>=0 && v[i]<=ma)
        {
            ma=max(ma,v[i]+1);
        }
        else
        {
            cout<<i+1<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}