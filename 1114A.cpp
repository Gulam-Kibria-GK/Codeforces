#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,l,x,y,z,a,b,c;
    cin>>x>>y>>z>>a>>b>>c;
    a-=x;
    if(a>=0)
    {
        b+=a;
        b-=y;
        if(b>=0)
        {
            c+=b;
            c-=z;
            if(c>=0)
            {
                cout<<"YES"<<endl;
                return 0;
            }
            else
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    else
    {
        cout<<"NO"<<endl;
        return 0;
    }
}