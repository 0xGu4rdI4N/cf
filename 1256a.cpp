#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;


void solve(){
	ll a,b,n,s;
	cin>>a>>b>>n>>s;
	if (n>1){
	ll x=s/n;
	if (x<=a){
		ll y=s-x*n;
		if(y<=b){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}
	else{
		x=a;
		ll y=s-x*n;
		if(y<=b){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	}
}
	else{
		if (a+b>=s){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
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