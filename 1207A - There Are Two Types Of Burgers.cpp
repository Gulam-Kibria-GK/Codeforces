/*==============================================*\
ID:          Gulam_Kibria

Name:     Gulam Kibria Chowdhury
Study:      CSE, NEUB
Address:  Sylhet, Bangladesh

 mail: gkpalash101@gmail.com
\*===============================================*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,j,k,l,b,p,f,h,c,n;
    vector<ll>v;
    ll t;
    cin>>t;
    while(t--)
    {
        ll sum=0;
        cin>>b>>p>>f;
        cin>>h>>c;
//        pair<ll,ll>pi1,pi2;
//        pi1.first=p;
//        pi1.second=h;
//        pi2.first=f;
//        pi2.second=c;
        if(h>=c)
        {
            while(p)
            {

                if(b<2)
                    break;
                b-=2;
                p--;
                sum+=h;
            }
            while(f)
            {

                if(b<2)
                    break;
                b-=2;
                f--;
                sum+=c;
            }
        }
        else
        {
            while(f)
            {
                if(b<2)
                    break;
                b-=2;
                f--;
                sum+=c;
            }
            while(p)
            {
                if(b<2)
                    break;
                b-=2;
                p--;
                sum+=h;
            }

        }
        cout<<sum<<endl;
    }
}
