#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,l,n,m,a,b,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n>=m){
            cout<<"YES"<<endl;
        }
        else{
            if(n==1 || (n==2 && m>=4) || n==3){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }

    }
    return 0;
}