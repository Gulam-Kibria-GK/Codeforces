#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,n,m;
    map<int,int>mm;
    string st,st1;
    cin>>st>>st1;
    mm['a']=1;
    mm['e']=1;
    mm['i']=1;
    mm['o']=1;
    mm['u']=1;
    n=st.size();
    m=st1.size();
    if(n!=m){cout<<"No"<<endl;return 0;}
    for(i=0;i<n;i++){
        if(mm[st[i]]!=mm[st1[i]]){cout<<"NO"<<endl;return 0;}
    }
    cout<<"Yes"<<endl;
    return 0;
}