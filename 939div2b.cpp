#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;


void solve(){
	ll n;
	cin>>n;
	ll a[n];
	ll s[n+1]={0};
	for(ll i=0;i<n;++i){
		cin>>a[i];
		s[a[i]]++;
	}
	ll score=0;
	for (ll j=1;j<=n;++j){
		if (s[j]==2){
			score++;
		}
	}
	cout<<score<<endl;
}


	




int main(){
	int t;
	cin>>t;
	while (t--){
		solve();
	}	
}