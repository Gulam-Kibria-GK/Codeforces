#include<bits/stdc++.h>
using namespace std;

#define ll long long

string rev(string s){
    reverse(s.begin(),s.end());
    return s;
}

bool myfun(const pair<string,ll> &a,const pair<string,ll> &b){
    if(a.first==b.first){
       return a.second<b.second;
    }
    else{
        return a.first<b.first;
    }
}


int main()
{
    ll i,j,k,n,m,a,b;
    cin>>k;
    while(k--){
        cin>>n;
        string st,st2="";
        vector<pair<ll,pair<string,string> > >vv;
        vector<string>v,v2;
        vector<pair<string,ll> >ans;
        cin>>st;
        if(n==1){
            cout<<st<<endl;
            cout<<1<<endl;
            continue;
        }
        ans.push_back({st,1});
        st2="";
        for(i=0;i<n-1;i++){
            st2+=st[i];
            v.push_back(st2);
        }
        reverse(st.begin(),st.end());
        st2="";
        string ss="";
        for(i=0;i<n-1;i++){
            ss=st[i];
            st2=ss+st2;
            v2.push_back(st2);
        }
        m=v2.size();
        reverse(v2.begin(),v2.end());
        for(i=0;i<m;i++){
            vv.push_back({i+1,{v[i],v2[i]}});
        }
//        for(i=0;i<m;i++){
//            cout<<vv[i].first<<" "<<vv[i].second.first<<" "<<vv[i].second.second<<endl;
//        }
        for(i=0;i<m;i++){
            ll siz=n-vv[i].first;
            if(siz%2){
                string s1=vv[i].second.second+rev(vv[i].second.first);
                ans.push_back({s1,vv[i].first+1});
            }
            else{
                string s1=vv[i].second.second+vv[i].second.first;
                ans.push_back({s1,vv[i].first+1});
            }
        }
//        for(i=0;i<ans.size();i++){
//            cout<<ans[i].first<<" "<<ans[i].second<<endl;
//        }
        sort(ans.begin(),ans.end(),myfun);
//        cout<<endl;
//        for(i=0;i<ans.size();i++){
//            cout<<ans[i].first<<" "<<ans[i].second<<endl;
//        }

        cout<<ans[0].first<<endl;
        cout<<ans[0].second<<endl;
    }
}

/************
10
10
abcdefghij
10
jihgfedcba
4
abab
6
qwerty
5
aaaaa
6
alaska
9
lfpbavjsm
1
p
2
ba
3
bca
**********/