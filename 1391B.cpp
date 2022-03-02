#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>n;
    while(n--){
        cin>>a>>b;
        ll f=0;
        char ch[a+3][b+3];
        for(i=0;i<a;i++){
            for(j=0;j<b;j++){
                cin>>ch[i][j];
            }
        }
        for(i=0;i<a;i++){
            for(j=0;j<b;j++){
                if(j==b-1){
                    if(ch[i][j]=='R')f++;
                }
                if(i==a-1){
                    if(ch[i][j]=='D')f++;
                }
            }
        }
        cout<<f<<endl;
    }
}