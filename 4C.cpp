#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,l;
    cin>>n;
    string st;
    map<string , int>mp;
    for(i=0;i<n;i++)
    {
        cin>>st;
        if(mp[st]==0)
        {
            cout<<"OK"<<endl;
            mp[st]++;
        }
        else
        {
            cout<<st<<mp[st]<<endl;
            mp[st]++;
        }
    }
}