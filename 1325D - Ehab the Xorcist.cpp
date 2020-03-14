#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m;
    cin>>n>>m;
    if(n>m || (m-n)%2==1){
        cout<<-1<<endl;
        return 0;
    }
    if(m==0){
        cout<<0<<endl;
        return 0;
    }
    else if(n==m){
        cout<<1<<endl;
        cout<<n<<endl;
        return 0;
    }
    ll a=(m-n)/2;
    if((a&n)==0){
        cout<<2<<endl;
        cout<<a<<" "<<n+a<<endl;
        return 0;
    }
    cout<<3<<endl;
    cout<<a<<" "<<a<<" "<<n<<endl;
}
