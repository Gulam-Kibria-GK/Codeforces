#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,n,m,a,b;
    cin>>n>>m;
    string st="",st2="";
    for(i=0;i<m;i++){
        st+='#';
        if(i!=m-1)st2+='.';
    }
    st2+='#';
    for(i=0;i<n;i++){
        if(i%2==0)cout<<st<<endl;
        else {cout<<st2<<endl;reverse(st2.begin(),st2.end());
        }
    }
    return 0;
}