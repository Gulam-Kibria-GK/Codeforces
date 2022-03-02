#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    int i,j,k,l,n,m;
    string st,st2;
    cin>>st>>st2;
    sort(st.begin(),st.end());
    int f=st.size();
    if(st[0]=='0'){
    for(i=0;i<f;i++){
        if(st[i]!='0'){
            swap(st[0],st[i]);
            break;
        }
    }
    }
    if(st2==st)cout<<"OK"<<endl;
    else cout<<"WRONG_ANSWER"<<endl;
    return 0;
}