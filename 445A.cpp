#include<bits/stdc++.h>
using namespace std;

#define ll long long
 char ch[100][100];

int main()
{
    ll n,m;
    cin>>n>>m;
    for(ll i=1; i<=n; i++){
        for(ll j=1; j<=m; j++){
            cin>>ch[i][j];
            if(ch[i][j]=='.'){
                if((i+j)%2==0)
                    ch[i][j]='B';
                else
                    ch[i][j]='W';
            }
        }
    }
    for(ll i=1; i<=n; i++){
        for(ll j=1; j<=m; j++)
            cout<<ch[i][j];
        cout<<endl;
    }
}