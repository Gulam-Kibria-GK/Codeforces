#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,k2,n,m,f=1;
    string st;
    vector<ll>v;
    cin>>n;
    while(n--)
    {
        cin>>m;
        cin>>st;
        if(m==2){
            if((st[0]-48)>=(st[1]-48)){
                cout<<"NO";
            }
            else{
            cout<<"YES"<<endl;
            cout<<2<<endl;
            cout<<st[0]<<" ";
            for(i=1;i<m;i++){
                cout<<st[i];
            }
        }
        }
        else{
            cout<<"YES"<<endl;
            cout<<2<<endl;
            cout<<st[0]<<" ";
            for(i=1;i<m;i++){
                cout<<st[i];
            }
        }
        cout<<endl;
    }
}