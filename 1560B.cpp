#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b,c;
    cin>>k;
    while(k--){
        cin>>a>>b>>c;
        ll ma=max(a,max(b,c));
        ll vl=abs(a-b);
        ll ful=vl*2;

        if(ful<ma){
            cout<<-1<<endl;
        }
        else{
            if((c-vl)>=1)
            {
                cout<<(c-vl)<<endl;
            }
            else if((c+vl)<=ful){
                cout<<(c+vl)<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
    }
}