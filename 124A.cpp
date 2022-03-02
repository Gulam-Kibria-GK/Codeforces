#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a,b,valu,ans,valu2;
    cin>>n>>a>>b;
    valu=n-a;
    valu2=b+1;
    if(valu<valu2)
    {
        ans=valu;
    }
    else
    {
        ans=valu2;
    }
    cout<<ans<<endl;
    return 0;
}