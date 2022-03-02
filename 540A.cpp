#include<bits/c++io.h>
#include<algorithm>
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s,s1;
    cin>>s;
    cin>>s1;
    int c=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]==s1[i])
        {
            continue;
        }
        int m=abs((s[i]-'0')-(s1[i]-'0'));
        if(m>5)
        {
            int p=10-m;
            c+=p;
        }
        else
        {
            c+=m;
        }
    }
    cout<<c<<endl;
}