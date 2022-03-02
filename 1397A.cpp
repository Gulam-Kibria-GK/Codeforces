#include<bits/stdc++.h>
using namespace std;

#define ll long long
map<char,ll>mm;


int main()
{
    ll i,j,k,n,m,a,b;
    cin>>k;
    while(k--){
        cin>>n;
        for(i=0;i<n;i++){
            string st;
            cin>>st;
            for(j=0;j<st.size();j++){
                mm[st[j]]++;
            }
        }
        ll ff=1;
        for(char kk='a';kk<='z';kk++){
            if(mm[kk]%n!=0){
                ff=0;
            }
        }
        if(ff==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        mm.clear();

    }
}