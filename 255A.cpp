#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll bi,ci,b,bb;
int main()
{
    ll i,j,k,l,n,m;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>m;
        if(i%3==1)ci+=m;
        else if(i%3==2)bi+=m;
        else b+=m;
        bb=max(bb,max(ci,max(bi,b)));
    }
    if(bb==bi){
        cout<<"biceps"<<endl;
    }
    else if(bb==ci){
        cout<<"chest"<<endl;
    }
    else
    {
        cout<<"back"<<endl;
    }

}