#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
map<ll,ll>mm,mm2;
vector<ll>st;
 
int main()
{
    ll i,j,k,n,m,a,b;
    cin>>n;
    while(n--){
        cin>>m;
 
        for(i=0;i<m;i++){
            cin>>a;
            mm[a]++;
            st.push_back(a);
            mm2[a]=i+1;
        }
        sort(st.begin(),st.end());
        ll f=1;
        for(i=0;i<st.size();i++){
            if(mm[st[i]]==1){
                f=0;
                cout<<mm2[st[i]]<<endl;
                break;
            }
        }
        if(f){
            cout<<-1<<endl;
        }
        mm.clear();
        mm2.clear();
        st.clear();
    }
}