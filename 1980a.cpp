#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;


void solve(){
	int n,m;
	map<string,int> k;
	string s="ABCDEFG";
	for(int i=0;i<s.size();++i){
		string str(1, s[i]);
		k[str]=0;
	}
	cin>>n>>m;
	string a;
	cin>>a;
	for(int i=0;i<a.size();++i){
		string b(1, a[i]);
		k[b]++;
	}
	int c=0;
	for (auto it=k.begin();it!=k.end();++it){
		if (m>it->second){
			c+=m-it->second;
		}
	}
	cout<<c<<endl;
}
	




int main(){
	int t;
	cin>>t;
	while (t--){
		solve();
	}
}