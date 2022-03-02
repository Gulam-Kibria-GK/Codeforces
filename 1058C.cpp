#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,k,l,m,n,sum=0,ne=0;
    string st,st2;
    cin>>n>>st;
    for(i=0;i<n;i++)
        sum+=st[i]-'0';
    for(i=2;i<=n;i++){
        int c=0,sm=0;
        ne=sum/i;
        if(sum%i!=0)continue;
        for(j=0;j<n;j++){
            sm+=st[j]-'0';
            if(sm>ne){
                sm=0;
            }
            else if(sm==ne){
                sm=0;
                c++;
            }
        }
        if(c*ne==sum){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}