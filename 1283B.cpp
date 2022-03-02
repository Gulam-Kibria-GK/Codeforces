#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,x,y,d;
    cin>>n;
    while(n--){
        cin>>m>>x;
        y=m-m%x;
        y+=min(m%x,x/2);
        cout<<y<<endl;
    }
}