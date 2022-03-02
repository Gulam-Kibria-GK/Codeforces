#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,j,k,l,n,m,a,f1,f2,x=-1,y=-1;
    f1=0,f2=0;
    string st,st2;
    cin>>st;
    st2="";
    string st3;
    st3=st;
    n=st.size();
    reverse(st3.begin(),st3.end());
    //cout<<st<<endl<<st3<<endl;
    for(i=0;i<n;i++){
        if(st3[i]==']' && f1==0){
            x=i;
            f1=1;
        }
        if(st3[i]==':' && f2==0 && f1==1){
            y=i;
            f2=1;
        }
        if(f2==1)break;
    }
   // cout<<x<<" "<<y<<endl;
    if(x<0 || y<0){
        cout<<-1<<endl;
        return 0;
    }
    f1=0,f2=0;
    //cout<<n-y-1<<endl;
    for(i=0;i<n-y-1;i++){
        if(st[i]=='[' && f1==0){
            st2+=st[i];
            f1=1;
        }
        if(st[i]==':' && f2==0 && f1==1){
            st2+=st[i];
            f2=1;
        }
        if(f2==1 && st[i]=='|'){
            st2+=st[i];
        }
    }
    if(f2==0){
        cout<<-1<<endl;
        return 0;
    }
    st2+=st[n-1-y];
    st2+=st[n-1-x];
    //cout<<st2<<endl;
    cout<<st2.size()<<endl;
}