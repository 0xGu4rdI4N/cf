#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;


const ll N = 1'000'000'000'000L;

void solve(){
	double n,v;
	cin>>n>>v;
	vector<double>a(n),b(n);
	double sa=0;
	for(auto &x:a){
		cin>>x;
		sa+=x;
	}
	for(auto &x:b){
		cin>>x;
		if (x==0){
			cout<<0<<endl;
			return;
		}
	}
	double y=v/sa;
	for(int i=0;i<n;++i){
		y=min((b[i]/a[i]),y);
	}
	cout<<sa*y<<endl;	
	// cout<<sa*l<<endl;
}	
	



int main(){
	// int t;
	// cin>>t;
	// while (t--){
		solve();
	// }

}