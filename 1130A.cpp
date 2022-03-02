#include<bits/stdc++.h>
using namespace std;

#define ll long long
vector<ll>v;

int main(){
    ll i,j,k,l,n,m,a,b,c=0,c2=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>b;
        v.push_back(b);
        if(b>0)c++;
        if(b<0)c2++;
    }
    m=(n/2)+(n&1);
    if(c>=m){
        cout<<1<<endl;
    }
    else if(c2>=m){
        cout<<-1<<endl;
    }
    else{
        cout<<0<<endl;
    }
}