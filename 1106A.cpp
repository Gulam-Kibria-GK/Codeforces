#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,l,n,m,c=0;
    cin>>n;
    char ch[n+3][n+3];
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cin>>ch[i][j];
        }
    }
    for(i=2;i<n;i++){
        for(j=2;j<n;j++){
            if((ch[i][j]=='X') && (ch[i-1][j-1]=='X') && (ch[i-1][j+1]=='X') && (ch[i+1][j-1]=='X') && (ch[i+1][j+1]=='X'))c++;
        }
    }
    cout<<c<<endl;
}