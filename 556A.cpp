#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,k,a=0,b=0,c=0;
    string s;
    cin>>n>>s;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='1')
            ++a;
        else
            ++b;
    }
    cout<<n-2*min(a,b)<<endl;
}