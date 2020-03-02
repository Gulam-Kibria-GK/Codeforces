#include<bits/stdc++.h>
using namespace std;

#define ll long long
vector<ll>v;
int main()
{
    ll i,j,k,l,n,m,a,b,c;
    cin>>n;
    while(n--)
    {
        string st,st1="one",st2="two",st3="twone";
        cin>>st;
        st+="****";
        m=st.size();
        c=0;
        if(m>8)
        {
            j=0;
            for(i=0; i<m-4; i++)
            {
                if(st[i]==st3[j])
                {
                    j++;
                    if(j==5)
                    {
                        k=i-2;
                        v.push_back(k);
                        st[k]='*';
                        j=0;
                        c++;
                    }
                }
                else
                {
                    if(st3[0]==st[i])i--;
                    j=0;
                }
            }
        }
        j=0;
        for(i=0; i<m-2; i++)
        {
            if(st[i]==st1[j])
            {
                j++;
                if(j==3)
                {
                    k=i-1;
                    v.push_back(k);
                    st[k]='*';
                    j=0;
                    c++;
                }
            }
            else
                {
                    if(st1[0]==st[i])i--;
                    j=0;
                }
        }
        j=0;
        for(i=0; i<m-2; i++)
        {
            if(st[i]==st2[j])
            {
                j++;
                if(j==3)
                {
                    k=i-1;
                    v.push_back(k);
                    st[k]='*';
                    j=0;
                    c++;
                }
            }
            else
                {
                     if(st2[0]==st[i])i--;
                    j=0;
                }
        }
        cout<<c<<endl;
        for(i=0;i<c;i++){
            cout<<v[i]+1<<" ";
        }
        cout<<endl;
       // cout<<st<<endl;
        v.clear();
    }
}

/****************
10
onetwonetwooneooonetwooo
two
one
twooooo
ttttwo
ttwwoo
ooone
onnne
oneeeee
oneeeeeeetwooooo
***********************/
