#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int main(){
    int n,a,b,c,cont=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        if((a+b+c) > 1) cont++;
    }
    cout<<cont;
}