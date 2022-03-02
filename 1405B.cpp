#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>n;
    vector<ll>v;
    while(n--)
    {
        cin>>a;
        for(i=0; i<a; i++)
        {
            cin>>b;
            v.push_back(b);
        }
        ll ans=0;
        reverse(v.begin(),v.end());
        for(i=0; i<a; i++)
        {
            if(v[i]<0)
            {
                ans+=abs(v[i]);
            }
            else if(v[i]>0)
            {
                if(ans>=v[i])
                {
                    ans-=v[i];
                }
                else
                {
                    ans=0;
                }
            }
        }
        cout<<ans<<endl;
        v.clear();
    }
}