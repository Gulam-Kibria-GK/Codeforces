#include<bits/stdc++.h>
#define read freopen("in.txt","r",stdin);
#define write freopen("out.txt","w",stdout);
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long int
const ll M=1e9+7;
using namespace std;
int main(){
    ll n;
    char s[400000];
    scanf("%*d");
    while(~scanf(" %lld %s",&n,s)){
        ll ans=0,g=0,l=0,i;
        for (i=0;i<n; i++){
            if (s[i]=='>') g++;
            if (s[i]=='<') l++;
        }
        if (g && l){
            for (i=0; i<n; i++)
                if (s[(i)%n]=='-' || s[(i+1)%n]=='-')ans++;
        }else ans=n;
        printf("%lld\n",ans);
    }
    return 0;
}