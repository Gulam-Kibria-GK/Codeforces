#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i;
    cin>>n>>m;
    int ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n,greater<int>());
    int c=0;
    for(i=0;i<n;i++)
    {
        m=m-ar[i];
            c++;
            if(m<=0)
            {
                break;
            }
    }
    cout<<c<<endl;
    return 0;
}