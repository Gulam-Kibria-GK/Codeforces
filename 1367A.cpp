#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b,c;
    string st;
    cin>>n;
    while(n--){
        cin>>st;
        m=st.size();
        for(i=0;i<m;i+=2){
            cout<<st[i];
        }
        cout<<st[m-1]<<endl;
    }
}