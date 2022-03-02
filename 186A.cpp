#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c = 0;
    string s, s1;
    cin>>s>>s1;
    for(int i = 0; i<s.size(); i++)
        if(s[i]!=s1[i])c++;
    
    sort(s.begin(), s.end());
    sort(s1.begin(), s1.end());
    if(s==s1 && c<3)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}