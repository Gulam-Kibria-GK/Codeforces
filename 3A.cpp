#include<bits/stdc++.h>
using namespace std;
#define pb push_back
string ss="";
int dd=0;
void ans(int n,int m,int k,int l,int c){
    int ff=0,i,ff2=0;
    if(n==k || m==l)ff=1;
    if(ff==1){
    dd=1;
    ff2=c+abs((n+m)-(k+l));
    cout<<ff2<<endl;
    for(i=0;i<c;i++)cout<<ss<<endl;
        if(n==k){
            if(m>l){
                for(int j=0;j<abs((n+m)-(k+l));j++){
                    cout<<"D"<<endl;
                }
            }
            else{
                for(int j=0;j<abs((n+m)-(k+l));j++){
                    cout<<"U"<<endl;
                }
            }
        }
        else if(m==l){
            if(n>k){
                for(int j=0;j<abs((n+m)-(k+l));j++){
                    cout<<"L"<<endl;
                }
            }
            else{
                for(int j=0;j<abs((n+m)-(k+l));j++){
                    cout<<"R"<<endl;
                }
            }
        }
    }
}
int main()
{
    int i,j,k,l,n,m,c=0;
    string st,st1;
    cin>>st>>st1;
    n=st[0]-96;m=st[1]-48;
    k=st1[0]-96;l=st1[1]-48;
    ans(n,m,k,l,c);
    if(dd==1)return 0;
    if(n<k && m<l){
        for(i=0;i<=8;i++){
            n++;m++;
            c++;ss="RU";
            ans(n,m,k,l,c);
            if(dd==1)return 0;
        }
    }
    else if(n>k && m<l){
        for(i=0;i<=8;i++){
            n--;m++;
            c++;ss="LU";
            ans(n,m,k,l,c);
            if(dd==1)return 0;
        }
    }else if(n>k && m>l){
        for(i=0;i<=8;i++){
            n--;m--;
            c++;ss="LD";
            ans(n,m,k,l,c);
            if(dd==1)return 0;
        }
    }else if(n<k && m>l){
        for(i=0;i<=8;i++){
            n++;m--;
            c++;ss="RD";
            ans(n,m,k,l,c);
            if(dd==1)return 0;
        }
    }
}