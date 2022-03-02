#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b,c;
    cin>>k;
    while(k--){
        cin>>n;
        string st;
        cin>>st;
        vector<ll>v,v2;
        v.push_back(0);
        for(i=0;i<n;i++){
            a=st[i]-'0';
            v.push_back(a);
        }
        v2=v;
        //cout<<v[1]<<endl;
        for(i=2;i<n+1;i++){
            v[i]+=v[i-1];
            //cout<<v[i]<<endl;
        }
        ll cnt=0;
        for(i=1;i<n+1;i++){
            for(j=i;j<n+1;j++){
               //cout<<i<<" "<<j<<" ->"<<(j-i+1)<<"=="<<(v[j]-v[i-1])<<endl;
                if((j-i+1)==(v[j]-v[i-1])){
                    cnt++;
                }
                else{
                    j=j+abs((v[j]-v[i-1])-(j-i+1));
                    j--;
                }
            }
        }
        cout<<cnt<<endl;
        v.clear();
    }
}