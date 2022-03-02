#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define LCM(a,b) (a / __gcd(a,b) ) * b
#define gcd(a,b) __gcd(a,b)

int main()
{
    //cout<<gcd(2,2);
    ll a,n,i,j,k;
    cin>>n;
    ll arr[n+4][n+5];
    vector<ll>v,v2,v3;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(j==0)
            {
                k=gcd(arr[i][j],arr[i][j+1]);
                //j++;
            }
            k=gcd(k,arr[i][j]);
        }
        cout<<k<<" ";
        v.push_back(k);
    }
    //reverse(v.begin(),v.end());
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(j==0)
            {
                k=gcd(arr[j][i],arr[j+1][i]);
                //j++;
            }
            k=gcd(k,arr[j][i]);
        }
        v2.push_back(k);
        //cout<<k<<" ";
        //v.push_back(k);
    }
    //cout<<endl;
//    for(j=0; j<n; j++)
//    {
//        ll jjj=0;
//        for(i=0; i<n; i++)
//        {
//            if(v[i]!=1)
//            {
//                //cout<<v[i]<<" "<<v2[j]<<endl;
//                k=gcd(v[i],v2[j]);
//                k=gcd(k,v2[i]);
//                k=gcd(k,v[i]);
//
//            }
//            else
//            {
//                v3.push_back(v2[j]);
//                jjj=1;
//                break;
//            }
//        }
//        if(jjj==0)
//            v3.push_back(k);
//    }
//    for(i=0; i<n; i++)
//    {
//        cout<<v3[i]<<" ";
//    }
    cout<<endl;
}