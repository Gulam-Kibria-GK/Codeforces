#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>k;
    while(k--){
        cin>>n;
        string st,st2;
        cin>>st;
        st2=st;
        if(st[0]=='1'){
            st[0]='2';
        }
        else{
            st[0]='1';
        }
        for(i=1;i<n;i++){
            if(st[i-1]=='2'){
                st[i]='1';
            }
            else if(st[i-1]=='1'){
                if(st[i]=='1'){
                    st[i]='2';
                }
            }
            else if(st[i-1]=='0'){
                if(st[i]=='1'){
                    st[i]='2';
                }
                else{
                    st[i]='1';
                }
            }
        }
        for(i=0;i<n;i++){
            cout<<st[i]-st2[i];
        }
        cout<<endl;
    }
}