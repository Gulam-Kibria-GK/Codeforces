#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>k;
    while(k--)
    {

        string st;
        cin>>st;
        n=st.size();
        ll z=0,o=0;
        for(i=0; i<n; i++)
        {
            if(st[i]=='0')
                z++;
            else
                o++;
        }
        ll mi=min(o,z);
        if(mi%2){
            cout<<"DA"<<endl;
        }
        else cout<<"NET"<<endl;
    }

}