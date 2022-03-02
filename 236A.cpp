#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<char>sc;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        sc.insert(s[i]);
    }
    if(sc.size()%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
}