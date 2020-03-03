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
    ll i,j,k,n,m,a,b;
    cin>>k;
    while(k--){
        string st,st2="";
        cin>>n>>st;

        ll f=0;
        for(i=0;i<n;i++){
            if((st[i]-48)%2==1){
                f++;
                st2+=st[i];
                if(f==2)break;
            }
        }
        if(n==1){
            cout<<-1<<endl;
        }
        else{
            if(f<2){
                cout<<-1<<endl;
            }
            else{
                cout<<st2<<endl;
            }
        }
    }
}
