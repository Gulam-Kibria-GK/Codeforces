#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d,p, nl, np,s1,s2,s3,ans1,ans2,ans3;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    s1=(k*l)/nl;
    s2=c*d;
    s3=p/np;
    ans1=min(s1,s2);
    ans2=min(ans1,s3);
    ans3=ans2/n;
    cout<<ans3<<endl;
}