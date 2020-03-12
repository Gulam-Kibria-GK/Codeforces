#include<bits/stdc++.h>
using namespace std;

using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>k;
    while(k--){
        string st;
        cin>>st;
        n=st.size();
        ll c=1,ans=0;
        for(i=0;i<n;i++){
            if(st[i]=='L'){c++;
            ans=max(ans,c);
            }
            else{
                c=1;
            }
        }
        cout<<(max(ans,c))<<endl;
    }
}
