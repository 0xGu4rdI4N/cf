#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;


void solve(){
	int n,m;
	cin>>n>>m;
	vector<int>v(1e5+1);
	for(int i=1;i<=n;++i){
		cin>>v[i];
	}
	vector<ll>a(1e5+1);
	set<int>b;

	for(int i=n;i>=1;--i){
		b.insert(v[i]);
		a[i]=b.size();
	}
	// cout<<b.size()<<endl;
	for (int i=0;i<m;++i){
		int l;
		cin>>l;
		cout<<a[l]<<endl;
	}
}	
	




int main(){
	// int t;
	// cin>>t;
	// while (t--){
		solve();
	// }

}