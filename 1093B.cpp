#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,j,k,l,n,m,a,b;
    cin>>n;
    for(i=0; i<n; i++)
    {
        string st;
        cin>>st;
        sort(st.begin(),st.end());
        string st2=st;
        reverse(st2.begin(),st2.end());
        if(st2==st)cout<<-1<<endl;
        else{
            cout<<st<<endl;
        }

    }
}