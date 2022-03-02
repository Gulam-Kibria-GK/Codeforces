
#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
 
int main()
{
	
	ll t;
	cin>>t;
 
	read:
	while(t--){
		ll n,ans=0;
		cin>>n;
		ll a[n],b[n],min_a=INT_MAX,min_b=INT_MAX;
		for(ll i=0;i<n;i++){
			cin>>a[i];
			min_a=min(min_a,a[i]);
		}
		for(ll i=0;i<n;i++){
			cin>>b[i];
			min_b=min(min_b,b[i]);
		}
		
		for(ll i=0;i<n;i++) ans+=max(a[i]-min_a,b[i]-min_b);
 
		cout<<ans<<endl;
	}
 
	return 0;
}