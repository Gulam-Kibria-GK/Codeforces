/*==============================================*\
ID:          Gulam_Kibria
Name:     Gulam Kibria Chowdhury
Study:      CSE, NEUB
Address:  Sylhet, Bangladesh
 mail: gkpalash101@gmail.com
\*===============================================*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
map<ll,ll>mm,mm2;

int main()
{
    ll i,j,k,t,l,n,m;
    vector<ll>v,v2,v3;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a;
        for(i=0;i<n;i++){
            cin>>a;
            v.push_back(a);
            mm[a]=1;
        }
        ll f=0;
        for(i=1;i<=n;i++){
            if(i<=v[i-1]){
                f=0;
            }
            else{
                f=1;
                break;
            }
        }
        if(f){
            cout<<-1;
        }
        else{
            for(i=1;i<=n;i++){
                if(mm[i]==0){
                    v3.push_back(i);
                }
            }
            //cout<<3<<endl;
            ll kk=0;
            for(i=0;i<n;i++){
                if(mm2[v[i]]==0){
                    v2.push_back(v[i]);
                    mm2[v[i]]=1;
                }
                else{
                    v2.push_back(v3[kk]);
                    kk++;
                }
            }
            for(i=0;i<n;i++){
                cout<<v2[i]<<" ";
            }
        }
        cout<<endl;
        v.clear();
        v2.clear();
        v3.clear();
        mm.clear();
        mm2.clear();
    }
}
