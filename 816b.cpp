#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
using ll=long long int;




void solve(){
	int n,k,q;
	cin>>n>>k>>q;
	vector<int>v(2e5+1);
	for(int i=0;i<n;++i){
		int x,y;
		cin>>x>>y;
		v[x]++;v[y+1]--;
	}
	// cout<<v[92]<<endl;
	for(int i=1;i<2e5+1;++i){
		v[i]=v[i]+v[i-1];
	}
	// cout<<v[92]<<endl;
	for(auto &x:v){
		if(x>=k)x=1;
		else x=0;
	}
	// cout<<v[92]<<endl;
	for(int i=1;i<2e5+1;++i){
		v[i]=v[i]+v[i-1];
	}
	while(q--){
		int x,y;
		cin>>x>>y;
		cout<<v[y]-v[x-1]<<endl;
	}
	}



int main(){
	// int t;
	// cin>>t;
	// while (t--){
		solve();
	// }
	
}