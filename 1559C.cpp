#include    <bits/stdc++.h>
#define fo(i,a,b) for(int i=(a);i<=(b);++i)
#define unique(V) (V).resize(unique((V).begin(),(V).end())-(V).begin())
#define cntbit(X)   builtin_popcount((X))
#define bit(S,i) (((S)>>(i))&1)
#define PI    acos(-1)
#define fi  first
#define se  second
#define LL  long long
#define ii  pair<int,int>
#define iii pair<int,ii>
#define eb  emplace_back
#define TASK "1559"
using namespace std;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
///--------------------------
const int N = 1e4 + 5;
int t,n,x[N];
bool ok;

int     main(){
    ///
        srand(time(NULL));
        ios::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        #ifdef TLH2203
            freopen(TASK".inp", "r", stdin);
            freopen(TASK".out", "w", stdout);
        #endif // TLH2203
    ///
    cin>>t;
    while(t--){
        cin>>n;
        ok = 0;
        for(int i = 1;i <= n;++i){
            cin>>x[i];
        }
        if(x[1] == 1){
            cout<<n + 1 <<' ';
            for(int i = 1;i <= n;++i){
                cout<<i<<' ';
            }
            cout<<'\n';
            continue;
        }
        if(x[n] == 0){
            for(int i = 1;i <= n;++i){
                cout<<i<<' ';
            }
            cout<<n + 1<<' ';
        }
        else{
            x[0] = x[n+1] = 0;
            for(int i = 1;i <= n;++i){
                cout<<i<<' ';
                if(x[i+1] == 1 && x[i] == 0 && ok == 0){
                    cout<<n + 1 <<' ';
                    ok = 1;
                }
            }
        }
        cout<<'\n';
    }
}