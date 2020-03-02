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

int main()
{
	ll i,j=0,k,n,m,a,b,c;
	cin>>k;
	while(k--){
        string st;
        cin>>st;
        n=st.size();
        c=0;
        for(i=0;i<n;i++){
            if(st[i]=='1'){
                    c++;
            }
        }
        ll f=0,f2=1,c2=0,ans=0;
        for(i=0;i<n;i++){
            if(c2==c)break;
            if(st[i]=='1' && f2==1){
                f=1;
                f2=0;
            }
            if(f==1){
                if(st[i]=='1')c2++;
                else{
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
	}
}
