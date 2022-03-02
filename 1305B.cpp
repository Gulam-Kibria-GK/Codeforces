#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a=0,b=1;
    string st;
    cin>>st;
    vector<ll>v,v2;
    n=st.size();
    i=0;j=0;
    while(true){
        if(i==n-j)break;
        //cout<<i<<" "<<j<<endl;
        if(st[i]=='(' && a==0 && b==1){
            a=1;
            b=0;
            v.push_back(i+1);
        }
        else if(a==1 && b==0 && st[n-j]==')'){
            a=0;
            b=1;
            v2.push_back(n-j+1);
        }
        if(v.size()<=v2.size())i++;
        else j++;
    }
    reverse(v2.begin(),v2.end());
    ll siz=min(v.size(),v2.size());
    if(siz)cout<<1<<endl;
    cout<<siz+siz<<endl;
    for(i=0;i<siz;i++){
        cout<<v[i]<<" ";
    }for(i=0;i<siz;i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;
}