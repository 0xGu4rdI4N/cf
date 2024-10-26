#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;


void solve(){
	string s;
	cin>>s;
	vector<int>v(1e5+1);
	int sum=0;
	for (int i=0;i<s.size()-1;++i){
		if (s[i]==s[i+1]){
			sum++;
		}
		v[i+1]=sum;
	}
	// for(auto &x:v){
	// 	cout<<x<<endl;
	// }
	int m;
	cin>>m;
	for (int i=0;i<m;++i){
		int l,r;
		cin>>l>>r;
		// cout<<r-1<<" "<<v[r-1]<<endl;
		// cout<<l-1<<" "<<v[l-1]<<endl;
		cout<<v[r-1]-v[l-1]<<endl;
	}
}	
	




int main(){
	// int t;
	// cin>>t;
	// while (t--){
		solve();
	// }

}