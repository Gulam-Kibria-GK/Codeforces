#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,a[101];
    cin>>n;
    for(int i = 1; i <= n;i++)
    {
        cin>>p;
        a[p] = i;
    }
    for(int i = 1; i <= n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}