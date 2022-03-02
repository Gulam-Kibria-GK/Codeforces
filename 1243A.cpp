#include<bits/stdc++.h>
using namespace std;

#define ll long long
vector<ll>v;
map<ll,ll>mm;

int main()
{
    ll i,j,k,n,m,a,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }

        sort(v.rbegin(),v.rend());
        for(i=1000;i>=1;i--){
            ll value=i;
            ll cn=0;
            for(j=0;j<n;j++){
                if(value<=v[j])cn++;
                else break;
            }
            if(cn>=value){
                cout<<value<<endl;
                break;
            }
        }
        v.clear();
    }
}