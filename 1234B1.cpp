#include<bits/stdc++.h>
using namespace std;
#define  ll    long long

int main() {

    ll n,m;
    cin>>n>>m;
    list<ll>ls;
    list <ll> :: iterator it;

    for(int i=0; i<n; i++) {
        ll x;
        cin>>x;
        int f=0;
        for(it = ls.begin(); it != ls.end(); ++it) {
            if(*it==x) {
                f=1;
                break;
            }
        }
        if(f==0) {
            ls.push_front(x);
        }
        if(ls.size()>m) {
            ls.pop_back();
        }
    }
    cout<<ls.size()<<endl;
    for(it = ls.begin(); it != ls.end(); ++it) {
        cout<<*it<<" ";
    }
    cout<<endl;


    return 0;
}