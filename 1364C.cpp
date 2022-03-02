#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b=1;
    cin>>k;
    vector<ll>v;
    map<ll,ll>mm;
    for(i=0; i<k; i++)
    {
        cin>>a;
        mm[a]++;
        v.push_back(a);
    }
    for(i=0; i<k; i++)
    {
        if(v[i]>i+1)
        {
            b=0;
            break;
        }
    }
    if(b==0)
    {
        cout<<-1<<endl;
        return 0;
    }
    ll ans=0,ff=0;
    for(i=0; i<k; i++)
    {
        if(v[i-1]!=v[i] && i>0)
        {
            cout<<v[i-1]<<" ";
            mm[v[i-1]]=1;
            if(mm[ans]!=0 && ff==1){
                ans++;
                ff=0;
            }

        }
        else
        {
            while(true)
            {
                if(mm[ans]==0)
                {
                    ff=1;
                    mm[ans]=1;
                    mm[v[i]]--;
                    cout<<ans<<" ";
                    ans++;
                    break;
                }
                else
                {
                    ans++;
                }
                //cout<<ans<<" ";
            }
        }
        //cout<<endl;
    }
}