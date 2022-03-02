#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct ab
{
    ll p,q;
};
bool cmp(ab x, ab y)
{
    if(x.q>y.q) return 1;
    else if(x.q==y.q && x.p<y.p) return 1;
    else return 0;
}
int main()
{
    ll int i,n,c=0;
    cin>>n;
    struct ab ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i].p>>ar[i].q;
    }
    sort(ar,ar+n,cmp);
    for(i=0;i<n-1;i++)
    {
        if((ar[i].p<ar[i+1].p) && (ar[i].q>ar[i+1].q))
        {
            c++;
        }
    }
    if(c>0)
    {
        cout<<"Happy Alex"<<endl;
    }
    else
    {
        cout<<"Poor Alex"<<endl;
    }
    return 0;
}