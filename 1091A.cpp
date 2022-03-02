#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,y,b,r;
    cin>>y>>b>>r;
    int ma=6;
    for(i=1;i<=y;i++){
        for(j=1;j<=b;j++){
            for(k=1;k<=r;k++){
                if(i+1==j && j+1==k){
                    ma=max(ma,i+j+k);
                }
            }
        }
    }
    cout<<ma<<endl;
}