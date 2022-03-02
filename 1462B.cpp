#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>a;
    while(a--)
    {
        string st,st2="2020";
        cin>>n>>st;
        ll ans=0;
        ll idx=0;
        if(n<4)
        {
            cout<<"NO"<<endl;
        }
        else{

            if(st[0]=='2' && st[1]=='0' && st[2]=='2' && st[3]=='0'){
                ans=1;
            }
            if(st[0]=='2' && st[1]=='0' && st[2]=='2' && st[n-1]=='0'){
                ans=1;
            }
            if(st[0]=='2' && st[1]=='0' && st[n-2]=='2' && st[n-1]=='0'){
                ans=1;
            }
            if(st[0]=='2' && st[n-3]=='0' && st[n-2]=='2' && st[n-1]=='0'){
                ans=1;
            }
            if(st[n-4]=='2' && st[n-3]=='0' && st[n-2]=='2' && st[n-1]=='0'){
                ans=1;
            }
            if(ans==1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}