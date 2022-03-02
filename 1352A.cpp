#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main()
{
    ll t,i,j,k,c=0,x,n;
    string s;
    cin>>t;
    while(t--)
    {
        vector<ll>vt;
        cin>>s;
        n = s.size();
        k = 0;
        for(i=0; i<n; i++)
        {
            if(s[i]!='0')
            {
                k = n-i-1;
                x = 1;
                for(j=0; j<k; j++)
                    x*=10;
                x = x*(s[i]-'0');
                vt.push_back(x);
            }
        }
        n = vt.size();
        cout<<n<<endl;
        for(i=0; i<n; i++)
            cout<<vt[i]<<" ";
        cout<<endl;
    }
}