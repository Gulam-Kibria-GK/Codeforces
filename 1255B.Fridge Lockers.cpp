#include<bits/stdc++.h>
using namespace std;

#define ll long long
vector<pair<ll,ll> >v,v2;

int main()
{
    ll i,j,k,l,n,m,a=0,b;
    cin>>k;
    while(k--)
    {
        ll kk=9999999;
        ll ii,jj,c=0,ff;
        cin>>n>>m;
        ll arr[n+4];
        for(i=0; i<n; i++)
        {
            cin>>ff;
            v.push_back({ff,i+1});
        }
        sort(v.begin(),v.end());
//        for(i=0;i<n;i++){
//            cout<<v[i].first<<" "<<v[i].second<<endl;
//        }
//        cout<<endl;
        ll ans=v[0].first+v[1].first;
        ii=v[0].second;
        jj=v[1].second;
        //cout<<ans<<endl;
        if(n==2 || m<n)
        {
            cout<<-1<<endl;
        }
        else
        {
            for(i=0; i<n-1; i++)
            {
                v2.push_back({v[i].second,v[i+1].second});
                c+=(v[i].first+v[i+1].first);
            }
                v2.push_back({v[n-1].second,v[0].second});
                c+=(v[n-1].first+v[0].first);
            m-=n;
            while(m--)
            {
                v2.push_back({ii,jj});
                c+=ans;
            }
            cout<<c<<endl;
            ll siz=v2.size();
            for(i=0;i<siz;i++){
                cout<<v2[i].first<<" "<<v2[i].second<<endl;
            }
        }
        v.clear();
        v2.clear();
    }

    return 0;
}
