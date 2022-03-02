#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b,x,y;
    cin>>a;
    while(a--)
    {
        cin>>n;
        string st;
        cin>>st;
        ll temp=0,cnt=0;
        for(i=0;i<n;i++){
            if(st[i]=='('){
                temp++;
               }
            else{
                if(temp){
                    temp--;
                    cnt++;
                }
            }
        }
        ll ans=n-(cnt*2);
        cout<<ans/2<<endl;
    }
}