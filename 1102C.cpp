#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

int main()
{
    ll i,j,k,l,n,m,c=1;
    cin>>n>>m>>k;
    ll arr[n+4];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    if(m>k){
        cout<<n<<endl;
        return 0;
    }
    else{
        for(i=0;i<n;i++){
            if(m>=arr[i])c++;
        }
    }
    cout<<c/2<<endl;
}