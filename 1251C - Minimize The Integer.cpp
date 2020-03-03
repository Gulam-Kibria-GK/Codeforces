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

int main()
{
    ll i,j,k,t;
    cin>>t;
    while(t--){
        ll n,o,e;
        string st;
        queue<ll>odd,even;
        cin>>st;
        n=st.size();
        for(i=0;i<n;i++){
            ll d=st[i]-'0';
            if(d&1)odd.push(d);
            else even.push(d);
        }
        o=odd.size();
        e=even.size();
        vector<ll>ans;
        while(true){
            if(even.size() > 0 && odd.size() > 0) {
                //cout<<even.front()<<endl;
                if(odd.front()<even.front())ans.push_back(odd.front()),odd.pop();
                else ans.push_back(even.front()),even.pop();
            }
            else if(even.size()>0){
                ans.push_back(even.front());
                even.pop();
            }
            else if(odd.size()>0){
                ans.push_back(odd.front());
                odd.pop();
            }
            else {
                break;
            }
        }
        for(i=0;i<n;i++){
            cout<<ans[i];
        }
        cout<<endl;
        ans.clear();
    }
}
