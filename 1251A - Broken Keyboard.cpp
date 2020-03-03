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
map<char,ll>mm,mm2;

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>k;
    while(k--){
        string st,st2="";
        cin>>st;
        st+='*';
        n=st.size();
        ll c=1;
        for(i=0;i<n-1;i++){
            if(mm2[st[i]]==0){
                st2+=st[i];
                mm2[st[i]]=1;
            }
            if(st[i]==st[i+1])c++;
            else{
                if(c&1){
                    mm[st[i]]=2;
                }
                else if(mm[st[i]]!=2){
                    mm[st[i]]=1;
                }
                c=1;
            }
        }
        sort(st2.begin(),st2.end());
        ll kk=st2.size();
        for(i=0;i<kk;i++){
            if(mm[st2[i]]==2){
                cout<<st2[i];
            }
        }
        mm.clear();
        mm2.clear();
        cout<<endl;
    }
}
