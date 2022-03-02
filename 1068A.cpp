#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,j,k,l,m,n,a,b;
    cin>>n>>m>>k>>l;
    if(m>n || k+l>n){
        cout<<-1<<endl;
        return 0;
    }
    a=k+l;
    b=a/m;
    if(a%m){
        b++;
    }
    if(m*b>n){
        cout<<-1<<endl;
        return 0;
    }
    cout<<b<<endl;
    return 0;
}