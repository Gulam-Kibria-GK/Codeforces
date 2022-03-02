
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,sum=0,c=101,k;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(c>b)
        {
            c=b;
        }
        int n=a*c;
        sum+=n;
    }
    cout<<sum<<endl;
    return 0;
}