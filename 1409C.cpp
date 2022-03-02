#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>k;
    while(k--)
    {
        cin>>n>>a>>b;
        ll dif=b-a;
        ll idx;
        for(i=1; i<=50; i++)
        {
            if(dif%i==0 && (dif/i)<n)
            {
                idx=i;
                break;
            }
        }
        //cout<<idx<<endl;
        vector<ll>v;
        v.push_back(a);
        v.push_back(b);
        ll dd=a;
        n-=2;
        while(n)
        {
            n--;
            dd+=idx;
            if(dd>=b)
            {
                n++;
                break;
            }
            v.push_back(dd);

        }
        dd=a;
        while(n)
        {
            n--;
            dd-=idx;
            if(dd<=0)
            {
                n++;
                break;
            }
            v.push_back(dd);

        }
        dd=b;
        while(n)
        {
            n--;
            dd+=idx;
            v.push_back(dd);
        }
        sort(v.begin(),v.end());
        for(i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        v.clear();
    }
}