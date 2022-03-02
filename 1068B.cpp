#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,j,k,b,c=0;
    cin>>b;
    if(b==1){
        cout<<1<<endl;
        return 0;
    }
    for(i=1;i*i<=b;i++){
        if(b%i==0 && b/i==i){
            c++;
        }
        else if(b%i==0){
            c+=2;
        }
    }
    cout<<c<<endl;
    return 0;
}