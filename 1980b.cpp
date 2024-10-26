#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;


void solve(){
	int n,f,k;
	cin>>n>>f>>k;
	vector<int>v;
	int c=0;
	for (int i=0;i<n;++i){
		int a;
		cin>>a;
		v.push_back(a);
	}
	int a;
	f=f-1;
	a=v[f];
	for (int i=0;i<n;++i){
		if(v[i]==a){
			c++;
		}
	}
	sort(v.begin(), v.end(), greater<int>());
	auto it =find(v.begin(), v.end(), a);
	int d= distance(v.begin(), it);
	if(k<d+1){
		cout<<"NO"<<endl;
	}
	else{
		if(k>=d+c){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"MAYBE"<<endl;
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