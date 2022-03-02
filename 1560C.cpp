#include<bits/stdc++.h>
using namespace std;

#define ll long long


map<ll,pair<ll,ll> >mm;
int main()
{
    ll i=0,j,k,n,m,a,b,c;
    ll l=1,r=1,ful=1,x=1;
    while(ful<20000000000){
       //cout<<i<<" "<<l<<" "<<r<<endl;
        mm[i]={l,r};
        x+=2;
        ful+=x;
        l=ful-x+1;
        r=ful;
        i++;
    }
    //cout<<i<<endl;
    //cout<<mm[14130].second<<endl;
    cin>>k;
    while(k--){
        cin>>a;
        ll idx;
        ll x,y;
        for(i=0;i<141421;i++){
            if(mm[i].first<=a && mm[i].second>=a){
                idx=i;
                break;
            }
        }
        ll mid=mm[i].first+idx;
        //cout<<"MID "<<mid<<" ---->";
        if(mid>=a){
            y=idx+1;
            x=(a-mm[i].first)+1;
        }
        else{
            x=idx+1;
            y=(mm[i].second-a)+1;
        }
        cout<<x<<" "<<y<<endl;
    }
}
/*****
8
10
11
14
5
4
1
2
1000000000

*/