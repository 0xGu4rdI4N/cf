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
	int k;
	cin>>k;
	string s;
	cin>>s;
	map<char,int>m;
	for(auto &c:s){
		m[c]++;
	}
	// for (auto &d:m){
	// 	cout<<d.first<<endl;
	// }
	bool ans=true;
	for (auto &val:m){
		if (val.second%k!=0){
			ans=false;
			// cout<<val.first<<endl;
			break;
		}
	}
	string a="";
	if (ans){
		for (auto &val:m){
		int b=val.second/k;
		// cout<<b<<endl;
		for (int i=0;i<b;++i){
			a+=val.first;
		}
	}
	// cout<<a<<endl;
	string c=a;
	for (int i=0;i<k-1;++i){
		a+=c;
	}
	cout<<a<<endl;
	}
	else{
		cout<<-1<<endl;
	}
}