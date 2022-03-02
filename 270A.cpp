#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,l,n,m;
    cin>>n;
    while(n--){
        cin>>m;
        m=180-m;
        if(360%m==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}