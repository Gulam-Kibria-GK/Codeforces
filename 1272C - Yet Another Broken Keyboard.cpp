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
map<char,ll>mm;
int main()
{
    ll i,j,k,n,m;
    cin>>n>>m;
    string st;
    char ch;
    cin>>st;
    for(i=0;i<m;i++){
        cin>>ch;
        mm[ch]=1;
    }
    ll ans=0,cunt=0;
    for(i=0;i<n;i++){
        if(mm[st[i]]==1){
            cunt++;
        }
        else{
            ans+=((cunt*(cunt+1))/2);
            cunt=0;
        }
    }
    ans+=((cunt*(cunt+1))/2);
    cout<<ans<<endl;
}
