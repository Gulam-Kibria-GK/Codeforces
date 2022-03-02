#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i,j,k,l,n,m,a;
    cin>>n;

    while(n--){
        cin>>m>>a;
        long long ans=0;
        while(m){
            if(m%a==0){
                ans++;
                m/=a;
            }
            else{
                ans+=(m-((m/a)*a));
                m-=(m-((m/a)*a));
            }
        }
        cout<<ans<<endl;
        ans=0;
    }
}