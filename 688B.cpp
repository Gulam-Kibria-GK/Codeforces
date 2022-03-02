#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    string st;
    cin>>st;
    n=st.size();
    cout<<st;
    for(i=n-1;i>=0;i--)
    {
        cout<<st[i];
    }
    cout<<endl;
    return 0;
}