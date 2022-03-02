#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll i,j,k,l,n,m,a,b;
    cin>>n>>m;
    string st,st2;
    st=st2="";
    for(i=0;i<n-1;i++){
        st2+="4";
    }
    st2+="5";
    for(i=0;i<n;i++){
        st+="5";
    }
    
    cout<<st2<<endl<<st<<endl;
    return 0;

}