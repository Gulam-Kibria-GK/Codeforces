#include<bits/stdc++.h>
using namespace std;

#define ll long long
map<ll,ll>mm;
vector<ll>v;
int main()
{
    ll i,j,l,n,m,a,b;
    cin>>n;
    while(n--)
    {
        cin>>m;
        ll ans;
        if(m>45)
        {
            cout<<-1<<endl;
        }
        else if(m<=9)
        {
            cout<<m<<endl;
        }
        else
        {
            for(i=9; i>=1; i--)
            {
                if(m<=9)
                {
                    break;
                }
                else
                {
                    mm[i]=1;
                    m-=i;
                    v.push_back(i);
                }
            }


            for(i=9; i>=1; i--)
            {
                if(mm[i]==0 && i<=m)
                {
                    m-=i;
                    v.push_back(i);
                    mm[i]=1;
                }
            }
            for(i=v.size()-1;i>=0;i--){
                cout<<v[i];
            }
            cout<<endl;
        }
        v.clear();
        mm.clear();
    }
}