#include<bits/stdc++.h>

using namespace std;
#define ll long long
string st[105];


int main()
{
    ll i,j,k,n,m,a,b=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>st[i];
    }
    for(i=0; i<n; i++)
    {
        ll kk=0;
        sort(st[i].begin(),st[i].end());
        for(j=0; j<st[i].size()-1; j++)
        {
            //cout<<++st[i][j]<<" "<<st[i][j+1]<<endl;
            if(++st[i][j]!=st[i][j+1]+0)
            {
                kk=1;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(kk==0)
        {
            cout<<"YES"<<endl;
        }
    }
}