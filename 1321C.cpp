#include<bits/stdc++.h>
using namespace std;

#define ll long long

map<char,ll>mm;
string st,st2="",st3;
ll n,cnt=0;

void solve(char ch){
    char cc=ch;
    ll i,j;
    st2="";
    cc--;
    for(i=0;i<n;i++){
        if(st[i]==ch && ch!='a'){
            if(i>0 && st[i-1]==cc){
                st[i]='*';

            }
            if(i<n-1 && st[i+1]==cc){
                st[i]='*';
            }
        }
    }
    for(i=0;i<n-1;i++){
        if(st[i]=='*' && st[i+1]==ch){
            st[i+1]='*';
        }
    }
    for(i=n-1;i>0;i--){
        if(st[i]=='*' && st[i-1]==ch){
            st[i-1]='*';
        }
    }
    for(i=0;i<n;i++){
        if(st[i]!='*'){
            st2+=st[i];
        }
        else{
            mm[ch]--;
        }
    }

    st=st2;
    n=st.size();
}

int main()
{
    ll j,k,m,a,b;
    cin>>n;
    cin>>st;
    for(int ii=0; ii<n; ii++)
    {
        mm[st[ii]]++;
    }
    st3=st;
    ll siz=900;
    while(siz-- && n>1)
    {
        for(char i='z'; i>='a'; i--)
        {
            if(mm[i])
            {
                solve(i);
            }
        }
    }
    //cout<<st3<<" "<<st<<endl;
    cout<<(st3.size()-st.size())<<endl;
}