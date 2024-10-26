#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;


void solve(){
	int n;
	cin>>n;
	vector<int>v(n);
	for(auto &x:v){
		cin>>x;
	}
	set<int>a;
	vector<ll>b(n);
	for(int i=0;i<n;++i){
		b[v[i]-1]++;
		a.insert(v[i]);
	}
	ll max=0;
	for (auto &x:b ){
		if (x>=max)max=x;
	}
	if(a.size()<max)cout<<a.size()<<endl;
	else if (a.size()==max) cout<<max-1<<endl;
	else cout<<max<<endl;
}	
	



int main(){
	int t;
	cin>>t;
	while (t--){
		solve();
	}

}	