#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        ll o=0,e=0;
        for(i=0;i<a;i++){
            cin>>m;
            if(m%2)o++;
            else e++;
        }
        if(o>=b){
            if(b%2)
                cout<<"YES"<<endl;
            else if(e!=0 && b%2==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else{
            if(o%2==0)o--;
            if((o+e)>=b && o>0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}