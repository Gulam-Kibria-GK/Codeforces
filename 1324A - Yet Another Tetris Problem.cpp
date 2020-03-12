#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m;
    vector<ll >v,v2;
    map<ll,ll>mm,mm2;
    cin>>n;
    while(n--)
    {
        cin>>m;
        for(i=0;i<m;i++){
            cin>>k;
            v.push_back(k);
        }
        for(i=0;i<m-1;i++){
            if((abs(v[i]-v[i+1]))%2==1){
                cout<<"NO"<<endl;
                goto ff;
            }
        }
        cout<<"YES"<<endl;
        ff:
            v.clear();
    }

}
