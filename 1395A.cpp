#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll i,j,k,l,n,m,a,b,f=0;
    cin>>a;
    while(a--){
        cin>>n>>m>>k>>l;
            f=0;
            if(n%2==0)f++;
            if(m%2==0)f++;
            if(k%2==0)f++;
            if(l%2==0)f++;
            if(f>=3 ){
                cout<<"Yes"<<endl;
                continue;
            }
        if(n==0 || m==0 || k==0){
            f=0;
            if(n%2==0)f++;
            if(m%2==0)f++;
            if(k%2==0)f++;
            if(l%2==0)f++;

            if(f<3){
                cout<<"No"<<endl;
            }
            else{
                cout<<"Yes"<<endl;
            }
            continue;

        }
        else if(l%2==0){
            f=0;
            if(n%2)f++;
            if(m%2)f++;
            if(k%2)f++;
            if(f==3 || f==1 ){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
            continue;
        }
        else{
            f=0;
            if(n%2)f++;
            if(m%2)f++;
            if(k%2)f++;
            if(f==0){
                cout<<"Yes"<<endl;
                continue;
            }
            else{
                if(f<2){
                cout<<"No"<<endl;
                }
                else{
                cout<<"Yes"<<endl;
                }
                continue;
            }

        }
    }

}