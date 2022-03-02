#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,l=0,n;
    stack<char>s;
    string st;
    cin>>st;
    n=st.size();
    for(i=0; i<n; i++)
        if(st[i]=='(')s.push(st[i]);
        else if(st[i]==')' && s.size())l+=2,s.pop();
    cout<<l<<endl;
    return 0;
}