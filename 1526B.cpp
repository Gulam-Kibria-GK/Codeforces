#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long int
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define Max 100000000000000
#define min_heap priority_queue <ll, vector<ll>, greater<ll> >

template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;


int main()
{   
    
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        ll c=n/11,x=n%11;
        if(c>=x*10) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}