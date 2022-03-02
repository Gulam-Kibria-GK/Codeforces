#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,x;
    long long int ans=0;
    cin>>c;
    while(c--){
     cin>>a>>b;
     x=max(a,b);
     ans=(a^x)+(b^x);
     cout<<ans<<endl;
    }
}