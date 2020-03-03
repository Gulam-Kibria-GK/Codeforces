#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define S second
#define F first
#define pb push_back
#define BaChao     ios_base::sync_with_stdio(false);cin.tie(NULL);
const int mxx=2*1e5;
int main()
{
    BaChao
    ll i,j,t,x,str,fr,now,in,lagbo,cnt;
    cin>>t;
    set<pair<ll,ll> >st;
    while(t--)
    {
        cin>>str>>in>>fr;
        x=str+fr;
        if(fr==0)
        {
            if(str>in) cout<<1<<endl;
            else cout<<0<<endl;
            continue;
        }
        if(x<in)
        {
            cout<<0<<endl;
        }
        else{
                if((x+in)%2==0){
                        now=(x+in)/2;
                        if((x-now)>fr) now=now+abs((x-now)-fr)-1;
                     cout<<(x-now)<<endl;
                }
                else {
                        now=((x+in)/2)+1;
                                   if((x-now)>fr) now=now+abs((x-now)-fr);
                cout<<(x-now)+1<<endl;
                }
        }
    }

}
