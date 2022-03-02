#include<bits/stdc++.h>
using namespace std;

int main(){
   string s,s1;

   int t;
   cin>>t;

   while(t--){
      cin>>s;
      cin>>s1;
      int f=0;
      for(int i=0;i<s.size(); i++){
           for(int j=0; j<s.size();j++){
               if(s[i]==s1[j]){
                  printf("YES\n");
                  f=1;
                  break;
               }
           }
           if(f){
            break;
           }
      }
      if(f==0){
         printf("NO\n");
      }
   }

}