#include<bits/stdc++.h>
using namespace std;

#define ll long long
map<char,ll>mm;
vector<ll>v;
int main()
{
    ll i,j,k,n,m;
    v.push_back(0);
    for(i=1;i<10;i++){
        v.push_back(i);
    }
    for(i=11;i<=99;i+=11){
        v.push_back(i);
    }
    for(i=111;i<=999;i+=111){
        v.push_back(i);
    }
    for(i=1111;i<=9999;i+=1111){
        v.push_back(i);
    }
    for(i=11111;i<=99999;i+=11111){
        v.push_back(i);
    }
    for(i=111111;i<=999999;i+=111111){
        v.push_back(i);
    }
    for(i=1111111;i<=9999999;i+=1111111){
        v.push_back(i);
    }
    for(i=11111111;i<=99999999;i+=11111111){
        v.push_back(i);
    }
    for(i=111111111;i<=999999999;i+=111111111){
        v.push_back(i);
    }
    ll siz=v.size();
    cin>>n;
    while(n--){
        cin>>m;
        for(i=0;i<siz;i++){
            if(m<v[i])break;
        }
        cout<<i-1<<endl;
    }

}
