#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;

const ll N = 1'000'000'000'000L;

void solve(){
	int n;
	cin>>n;
	vector<int>v(n);
	for(auto &x:v){
		cin>>x;
	}
	ll m=0;
	vector<ll>s(n);
	for (int i=n-1;i>=0;--i){
		if (v[i]+i>=n){
			s[i]=v[i];
		}
		else{
			s[i]=v[i]+s[v[i]+i];
		}
	}
	for (int i=n-1;i>=0;--i){
		m=max(s[i],m);
	}
	cout<<m<<endl;
}	
	



int main(){
	int t;
	cin>>t;
	while (t--){
		solve();
	}

}