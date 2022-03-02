#include <cstdio>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll i,j,k,l,m,n,mid,f=0,f2=0;
	cin>>n>>m;
	if(!(n&1))f=-1,f2=1;
	vector<ll>arr;
	map<ll,ll>mm,mm1,mm2;
	for(i=0;i<n;i++){
        cin>>k;
        arr.push_back(k);
        mm[k]=1;
	}
	sort(arr.begin(),arr.end());
	if(mm[m]){
        mid=n/2+f;
        if(arr[mid]==m)cout<<0<<endl;
        else if(arr[mid]>m){
                ll c=0;
            for(i=mid-1;i>=0;i--){

                c++;
                if(arr[i]==m)break;
            }
            cout<<mid+c-(mid-c)-1+f2<<endl;
        }
        else if(arr[mid]<m){
            ll c=0;
            for(i=mid+1;i<n;i++){

                c++;
                if(arr[i]==m)break;
            }
            cout<<mid+c-(n-(mid+c))+1<<endl;
        }
	}
	else{
        mid=n/2+f;
        if(arr[mid]<m){
            ll c=1;
            for(i=mid+1;i<n;i++){
                if(arr[i]>m)break;
                c++;
            }
            cout<<mid+c+1-(n-(mid+c))<<endl;
        }
        else if(arr[mid]>m){
                ll c=0;
            for(i=mid-1;i>=0;i--){
                if(arr[i]<m)break;
                c++;
            }
            cout<<mid+c-(mid-c)+1+f2<<endl;
        }

	}
	return 0;
}