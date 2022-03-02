#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,f=0;
    cin>>n>>a>>b;
    for(int i=1;i<n;i++)
    {
        int x=a/i;
        int y=b/(n-i);
        f=max(f,min(x,y));
    }
    cout<<f<<endl;
}