#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pair<int,int> > vpi;
typedef pair<int,int> ii;
typedef long long ll;
typedef unsigned long long ull;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update > pbds;

#define ft               first
#define sd               second
#define sf1(c)           scanf("%d",&c)
#define pf(c)            printf("%d ",c)
#define pof              pop_front
#define pob              pop_back
#define sz(a)            int((a).size())
#define pb               push_back
#define all(c)           (c).begin(),(c).end()
#define present(c,x)     ((c).find(x) != (c).end())
#define cpresent(c,x)    (find(all(c),x) != (c).end())
#define rep(i,a,b)       for(int i=a;i<=b;i++)
#define mp               make_pair
#define ms(a,b)          memset(a,b,sizeof a)
#define mod              100000000ll
#define hot              ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define err2(x,y)		 cout<<#x"="<<x<<" "#y"="<<y<<endl
#define err3(x,y,z) 	 cout<<#x"="<<x<<" "#y"="<<y<<" "#z"="<<z<<endl

const int dx[]={-1,0,1,0};
const int dy[]={0,-1,0,1};
const int N = 1e5+5;
ll poww(ll a,ll b,ll m)
{
	if(b==0)return 1ll;
	if(b==1)return a%m;
	ll ans = poww(a,b/2,m);
	ans = ((ans%m)*(ans%m))%m;
	if(b%2==1)ans = (ans*a)%m;
	return ans%m;
}
// int n,m;
struct Point{
	ll x,y;
	void scan(){
		cin>>x>>y;
	}
};

// int main()
// {
// 	int n;
// 	cin >> n;
// 	// set<string> st;
// 	string s;
// 	map<string,int> st ;
// 	st["orange"] = 0;
// 	st["purple"] =0;
// 	st["blue"] = 0;
// 	st["green"]=0;
// 	st["red"]=0;
// 	st["yellow"]=0;
// 	map<string,string> sp;
// 	sp["orange"] = "Soul";
// 	sp["purple"] ="Power";
// 	sp["blue"] = "Space";
// 	sp["green"]="Time";
// 	sp["red"]="Reality";
// 	sp["yellow"]="Mind";
// 	for(int i=0;i<n;i++){
// 		cin >>s ;
// 		st[s] = 1 ;
// 	}
// 	int c = 0;
// 	set<string> sm;
// 	for(auto it:st)
// 	{
// 		if(it.sd==0){c++;sm.insert(sp[it.ft]);}
// 	}
// 	cout<<c<<'\n';
// 	for(auto it:sm)
// 	{
// 	//	string p = it;
// 		cout<<it<<'\n';
// 	}
// 	return 0;
// }

int main()
{
    string s;
    int a2[]={2,4,8,6},a3[]={3,9,7,1},a4[]={4,6};
    cin>>s;
    int n=0;
    for(int i=0;i<s.size();i++){n=(n*10+(s[i]-'0'))%4;}
    if(n<4)n+=4;
    cout<<(1+a2[(n-1)%4]+a3[(n-1)%4]+a4[(n-1)%2])%5<<endl;
    return 0;
}