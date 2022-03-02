#include<bits/stdc++.h>
using namespace std;

#define ll long long
map<ll,ll>arr;

int main()
{
    ll i=0,j,k,n,m,a,b;
    cin>>k;
    while(k--)
    {
        cin>>a;
        ll f=0,i=0;
        while(true)
        {
            i++;
            if(i%3==0)
            {
                f++;
            }
            else
            {
                ll ff=i;
                stringstream ss;
                ss<<ff;
                string s;
                ss>>s;
                if(s[s.size()-1]=='3')
                {
                    f++;
                }
            }
            if(i-f==a)break;
        }
        cout<<i<<endl;
    }

}