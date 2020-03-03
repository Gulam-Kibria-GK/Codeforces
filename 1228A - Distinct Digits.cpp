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

int main(){
    ll i,j,k,n,m;
    string st,st2;
    cin>>n>>m;
    if(m<n){
        cout<<-1<<endl;
        return 0;
    }
    if(n==m)n--;
    for(i=n+1;i<=m;i++){
        stringstream ss;
        ss << i;
        st= ss.str();
        k=st.size();
        ll f=0;
        for(j=0;j<k;j++){
            if(mm[st[j]-48]==0){
                mm[st[j]-48]=1;
                f++;
            }
        }
        if(f==k){
            cout<<st<<endl;
            return 0;
        }
        st.clear();
        mm.clear();
    }
    cout<<-1<<endl;
}
