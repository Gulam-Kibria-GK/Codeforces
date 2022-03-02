#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>n;
    while(n--)
    {
        string st;
        cin>>st;
        ll siz=st.size();
        ll cur=0,res=0,f=0;
        for(i=0; i<siz; i++)
        {
            if(st[i]=='+'){
                res++,f++;
            }
            else{
                res++;
                f--;
                if(f<0){
                    res+=(i+1);
                    f=0;
                }
            }
        }
        cout<<res<<endl;
    }
}