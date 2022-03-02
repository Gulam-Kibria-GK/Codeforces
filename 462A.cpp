#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,n,m,c;
    cin>>n;
    char st[n+3][n+3];
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)cin>>st[i][j];
    }
    for(i=1;i<=n;i++){
            c=0;
        for(j=1;j<=n;j++){
                if(st[i][j+1]=='o')c++;
                if(st[i][j-1]=='o')c++;
                if(st[i-1][j]=='o')c++;
                if(st[i+1][j]=='o')c++;
                //cout<<c<<endl;
                if(c%2==1){cout<<"NO"<<endl;return 0;}
        }
        //cout<<endl;
    }
    cout<<"YES"<<endl;
    return 0;
}