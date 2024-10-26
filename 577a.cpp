#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;


void solve(){

}
	




int main(){
	// int t;
	// cin>>t;
	// while (t--){
	// 	solve();
	// }
	ll n,x;
	cin>>n>>x;
	ll c=0;
	for (ll i=1;i<=n;i++){
		if (x%i==0 && x/i<=n){c++;}
	}
	cout<<c<<endl;
}