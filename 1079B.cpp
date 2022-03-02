#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,l,n,m,a,b=5,ss,mi=9999999;
    string st;
    cin>>st;
    n=st.size();
    m=n;
    ll aa,aaa=-1;
    while(b--){
        aaa++;
        n=m+aaa;
        for(i=1; i<6; i++){
            if(n%i==0 && (n/i)<=20){
                if(((n/i)*i)==n){
                    if(mi>i){
                    aa=aaa;
                    mi=i;
                    ss=n/i;

                    }
                }
            }
        }
    }
    cout<<mi<<" "<<ss<<endl;
    ll kk=0;
    for(k=0; k<mi; k++)
    {
        ll dd=0,ff=1;
        if(aa==0)ff=0;
        //if((ss-ff+kk)==n)break;
        //cout<<kk<<" "<<ss-ff+kk<<endl;
        for(j=kk; j<ss-ff+kk; j++)
        {
            if(dd==0 && aa)cout<<'*',dd=1,aa--;
            cout<<st[j];
        }
        kk=j;
        cout<<endl;
    }

}