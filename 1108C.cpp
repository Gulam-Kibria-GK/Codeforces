#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll c1,c2,c3,c4,c5,c6,c7;
int main()
{
    ll i,j,k,l,n,m,a,b;
    string st,st1,st2,st3,st4,st5,st6,st7,s78,st9;
    st1="RGB";
    st2="RBG";
    st3="BRG";
    st4="BGR";
    st5="GRB";
    st6="GBR";
    cin>>n>>st;
    if(n==1)
    {
        cout<<0<<endl<<st<<endl;
        return 0;
    }
    if(n==2)
    {
        if(st[0]==st[1])
        {
            cout<<1<<endl;
            cout<<st[0];
            if(st[1]!='R')
            {
                cout<<'R'<<endl;
                return 0;
            }
            if(st[1]!='G')
            {
                cout<<'G'<<endl;
                return 0;
            }
            if(st[1]!='B')
            {
                cout<<'B'<<endl;
                return 0;
            }
        }
        else
        {
            cout<<0<<endl<<st<<endl;
            return 0;
        }
    }
    //cout<<ceil(n/3)<<endl;
    m=ceil(n/3);
    for(i=0; i<m; i++)
    {
        st1+="RGB";
        st2+="RBG";
        st3+="BRG";
        st4+="BGR";
        st5+="GRB";
        st6+="GBR";
    }
    //cout<<st<<" "<<st1<<" "<<st2<<" "<<st3<<" "<<st4<<" "<<st5<<" "<<st6<<" "<<endl;
    ll mi=1<<28;
    for(i=0; i<n; i++)
    {
        if(st[i]!=st1[i])c1++;
        if(st[i]!=st2[i])c2++;
        if(st[i]!=st3[i])c3++;
        if(st[i]!=st4[i])c4++;
        if(st[i]!=st5[i])c5++;
        if(st[i]!=st6[i])c6++;
    }
    if(mi>c1)
    {
        mi=c1;
        st9=st1;
    }
    if(mi>c2)
    {
        mi=c2;
        st9=st2;
    }
    if(mi>c3)
    {
        mi=c3;
        st9=st3;
    }
    if(mi>c4)
    {
        mi=c4;
        st9=st4;
    }
    if(mi>c5)
    {
        mi=c5;
        st9=st5;
    }
    if(mi>c6)
    {
        mi=c6;
        st9=st6;
    }
    cout<<mi<<endl;
    for(i=0; i<n; i++)
    {
        cout<<st9[i];
    }
    cout<<endl;
}