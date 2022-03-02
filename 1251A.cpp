#include <bits/stdc++.h>
#define ll long long int
#define ffr(i,a,b) for(i=a;i<b;i++)
#define mm(a,b) memset(a,b,sizeof(a))
using namespace std;
 
ll gcd(ll a, ll b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        bool ans[26], vis[26];
        mm(ans,0); mm(vis,0);
        int i, cur, len;
        vis[s[0]-'a']=1;
        i=0;
        int n=s.size();
        while(i<n)
        {
            cur=i;
            while(cur+1<n && s[cur]==s[cur+1]) cur++;
            cur++;
            len=cur-i;
            if(len&1) ans[s[i]-'a']=1;
            vis[s[i]-'a']=1;
            i=cur;
        }
        ffr(i,0,26)
        {
            if(ans[i] && vis[i]) cout << (char)('a'+i);
        }
        cout << endl;
    }
}