#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,l,n,m=0,a,b;
    cin>>a>>b;
    if(a-1<=b)cout<<a-1<<endl;
    else{
        n=b;
        j=2;
        for(i=1;i<=(a-b-1);i++){
            n+=j;
            j++;
        }
        cout<<n<<endl;
    }

}