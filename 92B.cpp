#include<bits/stdc++.h>
using namespace std;

#define ll long long
 
int main()
{
    ll n=0,k=0,i,sm=0,t=0,c=0;
    string s;
    cin>>s;
    n = s.size();
    for(i=0; i<n; i++)
    {
        if(s[i]=='1')
        {
            ++c;
            k = i+1;
        }
    }
    sm = n+k-c+1;
    if(c==1)
        sm-=2;
    cout<<sm<<endl;
}