#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>k;
    while(k--){
        string st;
        cin>>st;
        n=st.size();
        if((st[n-1]-'0')%2==0){
            cout<<0<<endl;
        }
        else if((st[0]-'0')%2==0){
            cout<<1<<endl;
        }
        else{
            ll f=0;
            for(i=0;i<n;i++){
                if((st[i]-'0')%2==0){
                    f=1;
                    break;
                }
            }
            if(f==0){
                cout<<-1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
    }
}