#include<bits/stdc++.h>
using namespace std;

#define ll long long
map<char,ll>mm;
map<ll,ll>mm1,mk;
int main()
{
    ll i,j,k,n,m,a;
    cin>>k;
    vector<ll>v,v1,v3;
    while(k--)
    {
        string st;
        cin>>n>>m;
        cin>>st;
        for(i=0; i<m; i++)
        {
            cin>>a;
            v1.push_back(a);
            if(mk[a]==0){
                v3.push_back(a);
                mk[a]=1;
            }
        }

        v3.push_back(n);
        sort(v1.begin(),v1.end());
        sort(v3.begin(),v3.end());

        for(i=0; i<m; i++)
        {
            if(mm1[v1[i]-1]==0)
            {
                mm1[v1[i]-1]+=(m-i)+1;
            }
        }
        mm1[n-1]=1;


//        map<ll,ll>::iterator itr;
//        for(itr = mm1.begin(); itr != mm1.end(); ++itr)
//        {
//            cout << itr->first  <<" "<<itr->second<<endl;
//        }

//        for(i=0;i<v3.size();i++){
//            cout<<v3[i]<<" ";
//        }
        j=0;
        for(i=0; i<n;)
        {

            if(i<=v3[j]-1)
            {

                //cout<<mm1[v3[j]-1]<<" "<<<<endl;
                //cout<<v3[j]-1<<" "<<mm1[v3[j]-1]<<endl;
                mm1[i]=mm1[v3[j]-1];
                i++;
            }
            else

            {
                j++;
            }
        }

        for(i=0; i<n; i++)
        {
            mm[st[i]-97]+=mm1[i];
        }
        for(i=0; i<26; i++)
        {
            cout<<mm[i]<<" ";
        }
        cout<<endl;
        v1.clear();
        v3.clear();
        mm.clear();
        mm1.clear();
        mk.clear();
    }
}