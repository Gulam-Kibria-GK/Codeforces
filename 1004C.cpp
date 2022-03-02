#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(auto i=0; i<(n); i++)
#define mem(x,val) memset((x),(val),sizeof(x));
#define write(x) freopen(x,"w",stdout);
#define read(x) freopen(x,"r",stdin);
#define sqr(x) ((x)*(x))
#define pb push_back
#define clr clear()
#define inf (1<<30)
#define eps 1e-9
#define PI acos(-1)
#define bug printf("hello\n");

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;

ll ca[100005], mark[100005];
int main() {
    //read("test.txt");
    ll n;
    cin>>n;
    ll lel[n];
    ll cnt = 0;;
    for(ll i = 0; i<n; i++){
        ll x; cin>>x;
        lel[i] = x;
        if(ca[x]==0){
            cnt++;
        }
        ca[x]++;
    }
    ll ans = 0;
    for(ll i = 0; i<n; i++){
        ca[lel[i]]--;
        if(ca[lel[i]]==0){
            cnt--;
        }
        if(mark[lel[i]]==0){

            //cout<<cnt<<' '<<i<< endl;
            ans+=cnt;
            mark[lel[i]] = 1;
        }
    }
    //cout<<endl;
    cout<<ans<<endl;
    return 0;
}