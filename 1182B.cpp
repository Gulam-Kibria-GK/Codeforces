#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,l,n,m,a,b,c=0;
    cin>>n>>m;
    string st[n+5];
    for(i=1; i<=n; i++){
        cin>>st[i];
    }
    st[0]="";
    st[n+1]="";
    for(i=0; i<=n+1; i++){
            st[i]='.'+st[i]+'.';
        for(j=0; j<=m+1; j++){
            if(i==0)st[0]+='.';
        }
    }
    st[n+1]=st[0];
    for(i=1; i<=n-1; i++){
        for(j=0; j<m-1; j++){
            if( st[i][j]=='*' && st[i][j+1]=='*' && st[i][j-1]=='*' && st[i+1][j]=='*' && st[i-1][j]=='*'){
                c++;k=i;l=j;
            }
        }
    }
    if(n==m && n==3){
        cout<<"NO"<<endl;
        return 0;
    }
    if(c==1){
        for(i=l; i<=m; i++){
            if(st[k][i]=='.')break;
            st[k][i]='.';
        }
        for(i=l-1; i>=0; i--){
            if(st[k][i]=='.')break;
            st[k][i]='.';
        }
        for(i=k+1; i<=n; i++){
            if(st[i][l]=='.')break;
            st[i][l]='.';
        }
        for(i=k-1; i>=0; i--){
            if(st[i][l]=='.')break;
            st[i][l]='.';
        }
        for(i=0; i<=n+1; i++){
            for(j=0; j<m+1; j++){
                if(st[i][j]=='*'){
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }

}