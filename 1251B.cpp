#include<bits/stdc++.h>
#define SeeYouAgain return 0
using ll=long long int;
using namespace std;
int main(){
	int t,n;
	scanf("%d",&t);
	char s[60][60];
	while (t--){
		vector<int>v;
		scanf("%d",&n);
		int one=0,zero=0,l,i,j,ans=0;
		for (i=0; i<n; i++){
			scanf("%s",s[i]);
			l=strlen(s[i]);
			for (j=0; j<l; j++)
				s[i][j]=='1'? one++:zero++;
			v.push_back(l);
		}
		for (i=0; i<v.size(); i++){
			//printf("one=%d zero=%d for %d\n",one,zero,v[i]);
			if (!(v[i]&1)){
				if (one>=v[i]){
					one-=v[i],ans++;
					v.erase(v.begin()+i), i--;
				}
				else if (zero>=v[i]){
					zero-=v[i],ans++;
					v.erase(v.begin()+i), i--;
				}
				else{
					int x=0,ze=zero;
					if (zero&1) x=zero-1, zero=1;
					else x=zero, zero=0;
					x=v[i]-x;
					if (one>=x){
						one-=x;
						ans++;
						v.erase(v.begin()+i), i--;
					}else zero=ze;
				}
			}
		}
		//puts("For odd");
		for (i=0; i<v.size(); i++){
			//printf("one=%d zero=%d for %d\n",one,zero,v[i]);
			if (!(v[i]&1)) continue;
			if (one>=v[i]){
				one-=v[i],ans++;
				v.erase(v.begin()+i), i--;
			}
			else if (zero>=v[i]){
				zero-=v[i],ans++;
				v.erase(v.begin()+i), i--;
			}
			else{
				int x=zero,ze=zero;
				zero=0;
				x=v[i]-x;
				if (one>=x){
					one-=x;
					ans++;
					v.erase(v.begin()+i), i--;
				}else zero=ze;
			}
		}
 
		//printf("one=%d zero=%d\n",one,zero);
		printf("%d\n",ans);
 
	}
	SeeYouAgain;
}