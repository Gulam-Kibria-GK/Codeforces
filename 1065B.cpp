#include<bits/stdc++.h>
using namespace std;

int main(){
    long long i,j,k,l,n,m,a,b,mi=0,ma=0;
    cin>>n>>m;
    if(m==0){cout<<n<<" "<<n<<endl;return 0;}
    a=m*2;
    if(a>=n){
            mi=0;
    }
    else{
        mi=n-a;
    }
    for(i=1;i<=n;i++){
        if(((i*(i-1))/2)>=m){ma=n-i;break;}
    }
    cout<<mi<<" "<<ma<<endl;
    return 0;
}