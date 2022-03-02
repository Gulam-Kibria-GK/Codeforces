#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
 
    while(t--)
    {
 
        ll n,k;
        cin>>n>>k;
 
        ll mn = 10000000000000,mx = -1;
        ll N[n+10];
        for(int i=0;i<n;i++){
            cin>>N[i];
        }
 
        sort(N,N+n);
        ll ans = N[n-1];
 
        for(int i=n-2;i>=0;i--){
            ans+=N[i];
            k--;
            if(k<=0) break;
        }
 
        cout<<ans<<endl;
 
 
    }
 
 
}