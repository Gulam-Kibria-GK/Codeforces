#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>n;
    while(n--)
    {

        a=0;
        cin>>m;
        ll arr[m+2];
        for(i=0; i<m; i++){
            cin>>arr[i];
        }
        ll div,val,f;
        for(i=0; i<m; i++){
            if(arr[i] % (i + 2)){
                continue;
            }
            else{
                div=i+2;
                val=arr[i];
                f=1;
                while(true){
                    if(div==1)
                        break;
                    if(val%div==0){
                        div--;
                    }
                    else{
                        f=0;
                        break;
                    }
                }
                if(f==1){
                    a=1;
                    break;
                }
            }
        }
        if(a==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}