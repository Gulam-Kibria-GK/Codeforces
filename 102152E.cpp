#include<bits/stdc++.h>
using namespace std;

#define ll long long
map<char,ll>mm,mm2;


int main()
{
    ll i,j,k,n,m,t,a,b,c,d,x=0,f=0;
    cin>>t;
    string st,st2,st3;
    while(t--)
    {
        char ch='a';
        for(i=0;i<26;i++){
            mm2[ch]=999999;
            ch++;

        }
        x=0,f=0;
        cin>>n>>m;
        cin>>st>>st2>>st3;
        for(i=0;i<n;i++){
            mm[st[i]]=1;
            if(mm2[st[i]]>st2[i]-48)
                mm2[st[i]]=st2[i]-48;
        }
        for(i=0;i<m;i++){
            if(mm[st3[i]]==1){
                x+=mm2[st3[i]];
            }
            else{
                cout<<-1<<endl;
                f=1;
                break;
            }
        }
        if(f==0)cout<<x<<endl;
        mm.clear();
        mm2.clear();
    }
}