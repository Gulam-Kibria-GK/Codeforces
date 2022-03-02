#include<bits/stdc++.h>
using namespace std;

#define ll long long

struct node
{
    int x,y,num;
}per[200005];

bool cmp(node a,node b)
{
	if(a.x==b.x){
		if(a.y==b.y){
			return a.num<b.num;
		}else return a.y<b.y;
	}else return a.x<b.x;
}

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>n;
    while(n--)
    {
        // vector<pair<pair<ll,ll> ,ll> >;
        string st;
        cin>>m>>st;
        ll x=0,y=0,l=0,r=0,ans=INT_MAX,f=0;
        per[0].x=0;
        per[0].y=0;
        per[0].num=0;
        for(i=0; i<m; i++)
        {
            if(st[i]=='L')
                x--;
            if(st[i]=='R')
                x++;
            if(st[i]=='U')
                y++;
            if(st[i]=='D')
                y--;
            per[i+1].x=x;
            per[i+1].y=y;
            per[i+1].num=i+1;

        }
        sort(per,per+m+1,cmp);
        for(int i=1; i<=m; i++)
        {
            if(per[i].x==per[i-1].x && per[i].y==per[i-1].y)
            {
                f=1;
                if((per[i].num-per[i-1].num)<ans)
                {
// 				cout<<per[i].num-per[i-1].num<<endl;
                    ans=per[i].num-per[i-1].num;
                    l=per[i-1].num;
                    r=per[i].num;
                }
            }
        }
        if(f)cout<<l+1<<' '<<r;
        else cout<<-1;
        cout<<endl;
    }
}