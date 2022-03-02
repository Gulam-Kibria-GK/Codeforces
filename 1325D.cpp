#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m;
    cin>>n>>m;
    if(n==m){
        if(n==0){
            cout<<0<<endl;
            return 0;
        }
        cout<<1<<endl;
        cout<<n<<endl;
    }
    else if(n>m){
        cout<<-1<<endl;
    }
    else{
        if((1^(m-1))==n){
            cout<<2<<endl;
            cout<<1<<" "<<m-1<<endl;
        }
        else{
            if((m-n)%2==0){
                cout<<3<<endl;
                cout<<((m-n)/2)<<" "<<((m-n)/2)<<" "<<n<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
    }
}