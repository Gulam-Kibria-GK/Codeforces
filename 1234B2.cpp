#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,k,c,i,j;
    cin>>n>>k;
    ll a[n+2];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    list<ll>vt;
    list<ll>::iterator it;
    map<ll,ll>mp;
    ll sz = 0;
    for(i=0; i<n; i++)
    {
        if(mp[a[i]]==0)
        {
            mp[a[i]] = 1;
            if(sz<k)
            {
                vt.push_front(a[i]);
                ++sz;
            }
            else if(sz!=0)
            {
                --sz;
                it = vt.end();
                --it;
                vt.erase(it);
                mp[*it]=0;
                vt.push_front(a[i]);
                ++sz;
            }
            else if(sz<k)
            {
                ++sz;
                vt.push_front(a[i]);
            }
        }
    }
    cout<<sz<<endl;
    for(it=vt.begin(); it!=vt.end(); it++)
        cout<<*it<<" ";

}