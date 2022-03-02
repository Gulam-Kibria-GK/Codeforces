#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll i,m;
    cin>>m;
    
    for(i=0; i<m; i++)
    {
        ll k=0,n,a,b,cc,l=0,j=0,mi=1000000009;
        cin>>n>>a>>b>>cc;
        if((abs(b-a))%cc==0)
        {
            j=1;
            ll gg=(abs(b-a))/cc;
            mi=min(mi,gg);
        }
        if(((b-1))%cc==0)
        {
            j=1;
            if(((a-1))%cc!=0)k++;
            k+=((a-1)/cc);
            k+=((b-1)/cc);
            mi=min(mi,k);
        }
        if((n-b)%cc==0) {
            j=1;
            if((n-a)%cc!=0)l++;
            l+=(n-a)/cc;
            l+=(n-b)/cc;
            mi=min(mi,l);
        }
        if(j==0){
            cout<<-1<<endl;
        }
        else{
            cout<<mi<<endl;
        }
    }
}