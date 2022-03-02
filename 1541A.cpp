#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,a,b,c,n,m;
    cin>>m;
    while(m--)
    {
        cin>>n;

            int x=0,x2=1;
            for(i=1;i<=n/2;i++){
                cout<<i+x2+x<<" ";
                if(n%2 && i==n/2){
                    cout<<n<<" ";
                }
                cout<<i+x<<" ";
                x+=1;
            }
            cout<<endl;

    }
}