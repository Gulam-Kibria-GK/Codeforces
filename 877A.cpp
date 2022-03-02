#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string str;
    cin>>str;
    int f=0;
    string s1="Danil", s2="Olya", s3="Slava", s4="Ann", s5="Nikita";
    if(str.find(s1)!=string::npos)
    {
        f=f+1;
    }
    if(str.find(s2)!=string::npos)
    {
        f=f+1;
    }
    if(str.find(s3)!=string::npos)
    {
        f=f+1;
    }
    if(str.find(s4)!=string::npos)
    {
        f=f+1;
    }
    if(str.find(s5)!=string::npos)
    {
        f=f+1;
    }
    //cout<<f<<endl;
    if(f==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}