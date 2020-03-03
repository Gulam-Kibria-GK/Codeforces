/*==============================================*\
ID:          Gulam_Kibria

Name:     Gulam Kibria Chowdhury
Study:      CSE, NEUB
Address:  Sylhet, Bangladesh

 mail: gkpalash101@gmail.com
\*===============================================*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1000000;
ll arr[N];
struct segment{
    ll value,level;
}tree[3*N+5];

void build(ll low,ll high,ll node)
{
    if(low>high)
    return ;
    if(low == high)
    {
        tree[node].value=arr[low];
        tree[node].level=1;
        return;
    }
    ll mid=(low+high)/2;
    build(low,mid,2*node+1);
    build(mid+1,high,2*node+2);

    tree[node].level=tree[2*node+1].level+1;

    if(tree[node].level%2==1)
    {
        tree[node].value=tree[2*node+1].value^tree[2*node+2].value;
    }
    else{
        tree[node].value=tree[2*node+1].value|tree[2*node+2].value;
    }
}
void update(ll low,ll high,ll ind,ll val,ll node)
{
    if(low>high)
    return;
    if(low == high)
    {
        tree[node].value=val;
    }
    else{
        ll mid=(low+high)/2;
        if(low<=ind && ind<=mid)
        update(low,mid,ind,val,2*node+1);
        else update(mid+1,high,ind,val,2*node+2);
        if(tree[node].level%2==1)
        {
            tree[node].value=tree[2*node+1].value^tree[2*node+2].value;
        }
        else{
            tree[node].value=tree[2*node+1].value|tree[2*node+2].value;
        }
    }
}

int main() {
        ll i,j,k,n,m,a,b,p;
        scanf("%lld %lld",&n,&m);
        ll nn=pow(2,n);

    for(i=0;i<nn;i++)
    {
        scanf("%lld",&arr[i]);
    }
    build(0,nn-1,0);
    for(i=0;i<m;i++)
    {
        scanf("%lld %lld",&p,&b);
        update(0,nn-1,p-1,b,0);
        printf("%lld\n",tree[0].value);
    }
    return 0;
}
