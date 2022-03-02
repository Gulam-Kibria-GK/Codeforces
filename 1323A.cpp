#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>j;
    while(j--){
        b=0;
        k=0;
        cin>>n;
        vector<ll>v;
        for(i=0;i<n;i++){
            cin>>a;
            v.push_back(a);
            if(a%2==0){
                b=1;
            }
        }
        if(b==1){
            for(i=0;i<n;i++){
                if(v[i]%2==0){
                    cout<<1<<endl;
                    cout<<i+1<<endl;
                    k=1;
                    break;
                }
            }
        }
        else{
            for(i=0;i<n-1;i++){
                if(v[i]%2==1 && v[i+1]%2==1){
                    cout<<2<<endl;
                    cout<<i+1<<" "<<i+2<<endl;
                    k=1;
                    break;
                }
            }
        }
        if(k==0){
            cout<<-1<<endl;
        }
        v.clear();
    }
}