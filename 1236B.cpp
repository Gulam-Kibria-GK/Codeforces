#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 100;

typedef long long ll;

ll mod = 1e9 + 7;

ll bm(ll b, ll p) {
    if(p==0) return 1;
    ll t = bm(b,p/2);
    t=(t*t)%mod;
    if(p&1) return (t*b)%mod;
    return t;
}

int main() {
    ll n, m;
    cin >> n >> m;
    ll ans = bm(2,m)+mod-1;
    ans %= mod;
    ans = bm(ans,n);
    cout << ans << endl;
    return 0;
}