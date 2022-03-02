#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,l,n,m,a,b;
    ll arr[1000];
    for(i=0; i<3; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+3);
    cin>>n;
    ll sum=0;
    if((abs(arr[0]-arr[1]))<n)
        sum+=(abs(n-abs(arr[0]-arr[1])));
    if((abs(arr[1]-arr[2]))<n)
        sum+=(abs(n-abs(arr[1]-arr[2])));
    cout<<sum<<endl;
}