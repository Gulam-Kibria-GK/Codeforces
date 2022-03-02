#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,m,t,te=0,i,j,k,c=0,cnt=0,x,y;
    string s,s2="",str="";
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==1)
            ++c;
        else if(n%2==0)
            ++cnt;

    }
    cout<<min(c,cnt)<<endl;
    //printf("Case %lld: ",++te);
}