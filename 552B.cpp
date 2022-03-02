#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll i,j,k,l,a,b=0,n,m;
    cin>>n;
    m=n;
    stringstream ss;
    ss<<n;
    string st=ss.str();
    a=st.size();
    for(i=0;i<a;i++){
        b=(10*b)+1;
    }
    cout<<a*(m+1)-b<<endl;
    return 0;
}