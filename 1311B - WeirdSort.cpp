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

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>k;
    vector<ll>v,v1;
    while(k--){
        cin>>m>>n;
        ll siz=1000;
        for(i=0;i<m;i++){
            cin>>a;
            v.push_back(a);
        }
        for(i=0;i<n;i++){
            cin>>a;
            if(a!=m)
                v1.push_back(a);
        }
        sort(v1.rbegin(),v1.rend());

        while(siz--){
            for(i=0;i<v1.size();i++){
                //cout<<v1[i]-1<<" "<<v1[i]<<endl;
                if(v[v1[i]]<v[v1[i]-1]){
                   // cout<<"SW"<<endl;
                    swap(v[v1[i]],v[v1[i]-1]);
                }
            }
           // cout<<"JJ"<<endl;
        }

        /*while(siz--){
               // cout<<"LL"<<endl;
            for(i=0;i<v1.size();i++){
                if(v[v1[i]-1]>v[v1[i]]){
                    swap(v[v1[i]],v[v1[i]-1]);
                    //cout<<v[v1[i]-1]<<" "<<v[v1[i]]<<endl;
                }
            }
        }*/
        ll f=1;
//        for(i=0;i<m;i++){
//                cout<<v[i]<<" ";
//        }
        for(i=0;i<m-1;i++){
            if(v[i]>v[i+1]){
                f=0;
                break;
            }
        }
        if(f){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        v.clear();
        v1.clear();
    }
}
