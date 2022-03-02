#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i,j,k,l,n,m,a,b,sum=0;
    cin>>k;
    while(k--){
    cin>>n>>m>>a>>b;
        l=n/b;
        i=(l/m)*a;
        j=l%m;
        sum=j+i+(l-j);
        cout<<sum<<endl;

    }
}