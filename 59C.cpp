#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll mm[30];

int main(){
    ll i,j,k=0,f=0,n,m,a,b,c;
    string st,st2;
    cin>>m>>st;
    c=m-1;
    n=st.size();
    for(i=0;i<n;i++){
        if(st[i]!='?'){
            mm[st[i]-'a']=1;
        }
    }
    while(mm[c] && c>=0){
        c--;
    }
    for(i=(n-1)/2;i>=0;i--){
        if(st[i]=='?'){
            if(st[n-1-i]!='?'){
                st[i]=st[n-1-i];
            }
            else{
                if(c>=0){
                    st[i]='a'+c;
                    st[n-1-i]='a'+c;
                }
                else{
                    st[i]='a';
                    st[n-1-i]='a';
                }
                if(c>=0){
                    mm[c]=1;
                    while(mm[c]&&c>=0)c--;
                }
            }
        }
        else{
            if(st[n-1-i]!='?' && st[i]!=st[n-1-i]){
                f=1;
                break;
            }
            else{
                st[n-1-i]=st[i];
            }
        }
    }
    if(f==1 || c>=0){
        cout<<"IMPOSSIBLE"<<endl;
    }
    else{
        cout<<st<<endl;
    }
}