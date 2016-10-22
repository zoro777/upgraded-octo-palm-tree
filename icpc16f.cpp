#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

	int t;//how the fuck are you
	
	scanf("%d",&t);
	while(t--){
		ll n,m,d,D;
		scanf("%lld %lld %lld %lld",&n,&m,&d,&D);
		if(d*n<=m && m<=D*n){
			ll x= m/n;
			for(int i=0;i<n;i++){
				int c=1;
				while(c<=x){
					ll y = i+c;
					y=y%n;
					y++;					
					printf("%lld %lld\n",(i+1),y);
					c++;
				}
			}
			ll p = m-x*n;
			int xx=1;
			while(p--){
				printf("%lld %lld\n",xx,xx);
				xx++;
			}
		}else{
			printf("-1\n");
		}

	}
}
