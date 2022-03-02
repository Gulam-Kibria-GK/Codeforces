#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,j,k,l,n,m,f,a;
    cin>>a;
    while(a--){
        cin>>k>>l>>n;
        if(k>n)f=n;
        else {
            f=l/n;
            f++;
            f*=n;
        }
        cout<<f<<endl;
    }
}