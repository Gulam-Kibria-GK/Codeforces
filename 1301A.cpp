#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>n;
    while(n--){
        string st,st2,st3;
        cin>>st>>st2>>st3;
        m=st.size();
        ll c=0;
        for(i=0;i<m;i++){
            if(st[i]==st3[i])c++;
            else if(st2[i]==st3[i])c++;
        }
        if(c==m){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}