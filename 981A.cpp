#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,n,m=0,c=0;
    string st;
    cin>>st;
    n=st.size();
    for(i=0;i<n;i++)
    {
        if(st[i]==st[n-i-1])c++;
        if(st[0]==st[i])m++;
    }
    if(c==n && m!=n)cout<<n-1<<endl;
    else if(c!=n) cout<<n<<endl;
    else if(m==n) cout<<0<<endl;
    return 0;
}