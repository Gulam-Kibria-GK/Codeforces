#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
map<char,ll>mm,mm2,mm3;
 map<char,ll>arr,arr2;
int main()
{
    ll i,j,k,n,m,a;
    cin>>k;
    ll ans,b;
    while(k--){
    	ans=0,b=0;
    	ll sum=0;
    	cin>>n>>m;
    	ll arr[11];
    	for(i=1;i<=10;i++){
    		arr[i]=((i*m)%10);
    		sum+=arr[i];
    	}
    	b=n/m;
    	a=b/10;
    	ans+=(a*sum);
    	for(i=1;i<=b%10;i++){
    			ans+=arr[i];
    	}
    	cout<<ans<<endl;
    }
}