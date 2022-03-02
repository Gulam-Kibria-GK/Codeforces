#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b,sum=0;
    cin>>n;
    ll arr[n+5];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    i=0;j=n-1;
    while(i<j){
        sum+=((arr[i]+arr[j])*(arr[i]+arr[j]));
        i++;
        j--;
    }
    cout<<sum<<endl;
}