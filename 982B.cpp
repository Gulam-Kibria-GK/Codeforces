#include <bits/stdc++.h>
#include<iostream>
#include <iomanip>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<vector>
#include<utility>
#include<stack>
#include<queue>
#include<map>
#include<sstream>

using namespace std;

#define db double
#define ll long long
#define lll unsigned long long
#define loop(i,a,n) for(int i=a;i<=n;i++)
#define sz size()
#define sf scanf
#define sf1(a) sf("%d",&a)
#define sf2(a,b) sf("%d %d",&a,&b)
#define sf3(a,b,c) sf("%d %d %d",&a,&b,&c)
#define sf4(a,b,c,d) sf("%d %d %d %d",&a,&b,&c,&d)
#define sfd(a) sf("%lf",&a)
#define sfd2(a,b) sf("%lf %lf",&a,&b)
#define sfd3(a,b,c) sf("%lf %lf %lf",&a,&b,&c)
#define sfl1(a) sf("%lld",&a)
#define sfl2(a,b) sf("%lld %lld",&a,&b)
#define sfl3(a,b,c) sf("%lld %lld %lld",&a,&b,&c)
#define ff 100000000


int main()
{
    vector< pair<long long,int> >v1;
    vector<int> v2;
    int i,j=-1,l=-1,k,n,m;
    ll x;
    sf1(n);
    getchar();
    for(i=0; i<n; i++)
    {
        sfl1(x);
        v1.push_back(make_pair(x,i+1));
    }
    sort(v1.begin(),v1.end());
    string st;
    getchar();
    cin>>st;
    m=st.size();

    for(i=0;i<m;i++)
    {
        if(st[i]=='0')
        {
            j++;
            l++;
            cout<<v1[l].second<<endl;
            v2.push_back(v1[l].second);

        }
        else if(st[i]=='1'){
            cout<<v2[j]<<endl;
            j--;
            v2.pop_back();
        }
    }
    return 0;
}