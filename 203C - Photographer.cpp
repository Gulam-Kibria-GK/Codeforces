/*==============================================*\
ID:          Gulam_Kibria

Name:     Gulam Kibria Chowdhury
Study:      CSE, NEUB
Address:  Sylhet, Bangladesh

 mail: gkpalash101@gmail.com
\*===============================================*/


#include<bits/stdc++.h>
using namespace std;

#define ll long long
struct pic{
    ll idx,value;
}arr[100009];

bool myfun(pic a,pic b){
    return (a.value<b.value);
}


int main()
{
    ll i,j,n,m,a,b;
    cin>>n>>m;
    cin>>a>>b;
    ll x,y;
    for(i=0;i<n;i++){
        cin>>x>>y;
        arr[i].idx=i+1;
        arr[i].value=(x*a+y*b);
    }
    sort(arr,arr+n,myfun);
    vector<ll>v;
    for(i=0;i<n;i++){
        if(m>=arr[i].value){
            m-=arr[i].value;
            v.push_back(arr[i].idx);
        }
        else
            break;
    }
    ll siz=v.size();
    cout<<siz<<endl;
    for(i=0;i<siz;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.clear();
}
