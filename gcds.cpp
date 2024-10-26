#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;



ll gcdSum(ll n){
	ll c=0;
	ll a;
	a=n;
	ll b;
    while (a != 0) {
            c = c + a % 10;
            a = a / 10;
        }
	ll m=min(n,c);
	// cout<<n<<endl<<c<<endl;
	for (ll i=1;i<=m;i++){
		if (n%i==0 && c%i==0){
			b=i;
		}

	}
	return b;
	}
void solve(){
	ll n;
	cin>>n;
	ll e;
	for (ll i=n;;i++){
		e=gcdSum(i);
		if (e!=1){
			cout<<i<<endl;

			break;
		}
	}
}

int main(){
	int t;
	cin>>t;	
	while (t--){
	solve();	
	}
}