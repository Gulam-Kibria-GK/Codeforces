#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define pb push_back
#define mp make_pair
#define ip pair<ll,ll>
#define ff first
#define ss second
#define MAX 200005
#define MOD 1000000007

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	ll n,k;
	cin>>n;
	k = n/2;
	ll p[k];
	for(int i=0;i<k;i++)
		cin>>p[i];
	sort(p,p+k);

	ll ans1=0,ans2=0;
	ll cur1=1,cur2=2;
	for(int i=0;i<k;i++){
		ans1 += abs(p[i]-cur1);
		cur1 += 2;
		ans2 += abs(p[i]-cur2);
		cur2 += 2;
	}

	cout<< min(ans1,ans2) <<endl; 
}