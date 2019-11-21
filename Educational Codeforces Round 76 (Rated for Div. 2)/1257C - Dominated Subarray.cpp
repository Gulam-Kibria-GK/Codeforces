#include<bits/stdc++.h>
using namespace std;

#define ll long long
vector<ll>v2[200005];
vector<ll>v;
map<ll,ll>mm;

int main()
{
    ll i,j,k,l,n,m,a,b,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
            v2[a].push_back(i+1);
        }
        if(n==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            ll mi=999999;
            for(i=0; i<n; i++)
            {
                if(mm[v[i]]==0)
                {
                    mm[v[i]]=1;
                    for(j=0; j<v2[v[i]].size()-1; j++)
                    {
                        mi=min(mi,abs(v2[v[i]][j]-v2[v[i]][j+1]));
                    }
                }
            }
            if(mi==999999)
            {
                cout<<-1<<endl;
            }
            else
                cout<<mi+1<<endl;
        }
        v.clear();
        mm.clear();
        for(i=0; i<n; i++)
        {
            v2[v[i]].clear();
        }
    }
    return 0;
}
