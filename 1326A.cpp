#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>k;
    while(k--){
        cin>>a;
        if(a==1){
            cout<<-1<<endl;
        }
        else{
        a--;
        cout<<2;
        while(a--){
            cout<<3;
        }
        cout<<endl;
        }
    }
}