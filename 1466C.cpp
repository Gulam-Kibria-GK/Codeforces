#include <bits/stdc++.h>
using namespace std;
#define ll long long



int main() {
	ll t;
	cin>>t;
	while(t--){
        string s;
        cin>>s;
        ll c=0;
        for(ll i=1;i<s.size();i++){
            if(s[i]==s[i-1] || ( i>1 && s[i]==s[i-2])){
               c++;
               s[i]='@';
            }
        }
        cout<<c<<endl;
    }
}