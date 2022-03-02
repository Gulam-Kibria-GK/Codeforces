#include<bits/stdc++.h>
using namespace std;

#define ll long long
 ll f1,f2,f3,f4,f5,f6,gg;

int main()
{
    ll i,j=0,k=0,k1=0,k2=0,k3=0,k4=0,k5=0,l,n,m,a,t,sum=0;
   
    cin>>n;
    vector<ll>v[n+5];
    vector<ll>vv;
    for(i=0; i<n; i++)
    {
        cin>>a;
        gg++;
        if(a==4)
        {
            v[j].push_back(a);
            j++;
            f1++;
        }
        else if(a==8 && f1!=0)
        {
            f1--;
            f2++;
            while(true)
            {
                if(v[k].size()==1)
                {
                    v[k].push_back(a);
                    break;
                }
                if(gg<k){vv.push_back(a);break;}
                k++;
            }
        }
        else if(a==15 && f2!=0)
        {
            f2--;
            f3++;
            while(true)
            {
                if(v[k1].size()==2)
                {
                    v[k1].push_back(a);
                    break;
                }
                 if(gg<k1){vv.push_back(a);break;}
                k1++;
            }
        }
        else if(a==16 && f3!=0)
        {
            f3--;
            f4++;
            while(true)
            {
                if(v[k2].size()==3)
                {
                    v[k2].push_back(a);
                    break;
                }
                 if(gg<k2){vv.push_back(a);break;}
                k2++;
            }
        }
        else if(a==23 && f4!=0)
        {
            f4--;
            f5++;
            while(true)
            {
                if(v[k3].size()==4)
                {
                    v[k3].push_back(a);
                    break;
                }
                 if(gg<k3){vv.push_back(a);break;}
                k3++;
            }
        }
         else if(a==42 && f5!=0)
        {
            f5--;
            while(true)
            {
                if(v[k4].size()==5)
                {
                    v[k4].push_back(a);
                    break;
                }
                 if(gg<k4){vv.push_back(a);break;}
                k4++;
            }
        }
    }
    ll ans=0;
    for(i=0;i<=j;i++){
        if(v[i].size()==6)ans++;
    }
    ans*=6;
    cout<<n-ans<<endl;
}