#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>v;

int main(){
    ll i,j,k,l,n,m,a,b;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        v.push_back(a+100000);
    }
    cout<<n+1<<endl<<1<<" "<<n<<" "<<100000<<endl;;
    ll c=0;
    for(i=0;i<v.size();i++){
        cout<<2<<" "<<i+1<<" "<<v[i]-c<<endl;
        c++;
    }
}