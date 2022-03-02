#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[7];
int main(){
    ll i,j,k,l,n,m,a;
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    cout<<arr[2]-arr[0]<<endl;
    return 0;

}