#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,kl;
    cin>>n;
    char st[n+2];
    cin>>st;
    int x=0,y=0,c=0;
    int a,b,f=1;
    for(i=0; i<n-1; i++)
    {
        if(st[i]=='R')
            x+=1;
        else if(st[i]=='U')
            y+=1;
        if(x==y && ((st[i]=='R' && st[i+1]=='R')))
            {
                c++;
                f=0;
            }
    else if(x==y && ((st[i]=='U' && st[i+1]=='U')))
            {
                c++;
                f=0;
            }
        }
        //cout<<"X = "<<x<<endl<<"Y = "<<y<<endl<<"C = "<<c<<endl;
    //if(c>0)
        //c++;
    cout<<c<<endl;
}