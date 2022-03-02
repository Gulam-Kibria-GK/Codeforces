#include <iostream>
#include <stdio.h>
#include <cstring>
#include <cmath>
#include <sstream>
#include <math.h>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int Val = -1;
    Val = a*b*c;
    Val = max(Val,(a+b)*c);
    Val = max(Val,a*(b+c));
    Val = max(Val,a*b+c);
    Val = max(Val,a+b*c);
    Val = max(Val,a+b+c);
    cout<<Val<<endl;
}