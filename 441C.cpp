#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define inf 2>>29

int main()
{
    ll i,j,k,l,n,m,a,b;
    cin>>n>>m>>k;
    vector<ll>v;
    for(i=1; i<=n; i++)
    {
        if(i%2)
        {
            for(j=1; j<=m; j++)
            {

                v.push_back(i);
                v.push_back(j);
            }
        }
        else
        {
            for(j=m; j>=1; j--)
            {
                v.push_back(i);
                v.push_back(j);
            }
        }
    }
    int y=0;
    for(i=0;i<k-1;i++){
        cout<<2<<" "<<v[y]<<" "<<v[y+1]<<" "<<v[y+2]<<" "<<v[y+3]<<endl;
        y+=4;
    }
    cout<<n*m-(2*(k-1))<<" ";
    for(i=y;i<v.size();i++){
        cout<<v[i]<<" "<<v[i+1]<<" ";
        i++;
    }
    cout<<endl;
    return 0;
}