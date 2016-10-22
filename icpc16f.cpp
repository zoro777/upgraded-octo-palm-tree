#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define pb push_back
#define mp make_pair
#define S second
#define F first

typedef long long ll;



int main(){

	int t;
	cin>>t;
	while(t--){
		ll n,m,d,D;
		cin>>n>>m>>d>>D;
		if(d*n<=m && m<=D*n){
			ll x= m/n;
			for(int i=0;i<n;i++){
				int c=1;
				while(c<=x){
					ll y = i+c;
					y=y%n;
					y++;
					cout<<(i+1)<<" "<<y<<endl;
					c++;
				}
			}
			ll p = m-x*n;
			int xx=1;
			while(p--){
				cout<<xx<<" "<<xx<<endl;
				xx++;
			}
		}else{
			cout<<"-1"<<endl;
		}

	}
}
