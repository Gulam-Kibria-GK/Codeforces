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
    ll i,j,k,n,ma,b,a,t;
    cin>>t;
    while(t--)
    {
        string st,st2,s="",s2="";
        cin>>n>>st>>st2;
        vector<pair<ll,ll> >v;
        for(i=0; i<n-1; i++)
        {
            if(st[i]!=st2[i])
            {
                ll id=-1;
                for(j=i+1; j<n; j++)
                {
                    if(st[i]==st2[j])
                    {
                        id=j;
                        v.push_back({i,i});
                        swap(st[i],st2[i]);
                        v.push_back({i,id});
                        swap(st[i],st2[id]);
                        break;
                    }
                }
                if(id==-1)
                {
                    for(j=i+1; j<n; j++)
                    {
                        if(st[i]==st[j])
                        {
                            id=j;
                            v.push_back({id,i});
                            swap(st[id],st2[i]);
                            break;
                        }
                    }
                }
            }
        }
        if(v.size()<=2*n){
            if(st==st2){
                cout<<"Yes"<<endl;
                cout<<v.size()<<endl;
                for(j=0;j<v.size();j++){
                    cout<<v[j].first+1<<" "<<v[j].second+1<<endl;
                }
            }
            else cout<<"No"<<endl;
        }
        else cout<<"No"<<endl;
        v.clear();
    }
}
