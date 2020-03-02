#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll i,j,n,m,t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        ll k=9,c=0;
        for(i=1;i<10;i++){
            if(m>=k){
                c++;
                k=(k*10)+9;
            }
            else{
                break;
            }
        }
        cout<<c*n<<endl;
    }
}
