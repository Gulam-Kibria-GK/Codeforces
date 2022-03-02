#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    int i,j,k,l,n,m;
    char c;
    cin>>n>>m;
    vector<char>ch[102];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>c;
            ch[i].push_back(c);
        }
    }
    for(i=0; i<n; i++)
    {
        if(i!=n-1)
        {
            if(ch[i][0]==ch[i+1][0])
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
        for(j=0; j<m-1; j++)
        {
            if(ch[i][0]!=ch[i][j+1])
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}