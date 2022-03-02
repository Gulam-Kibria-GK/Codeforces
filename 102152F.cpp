#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b,c,d;
    cin>>n;
    string st;
    while(n--){
        cin>>st;
        c=1;
        m=st.size();
        for(i=0;i<m;i++){
            if(st[i]>='A' && st[i]<='Z')c++;
        }
        if(c<=7){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}