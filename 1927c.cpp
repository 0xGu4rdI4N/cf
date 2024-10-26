	#include <bits/stdc++.h>
	#include <iostream>
	#include <string>
	using namespace std;
	using ll=long long int;


	void solve(){
		int n,m,k;
		cin>>n>>m>>k;
		set<int>a;
		set<int>b;

		for(int i=0;i<n;++i){
			int x;
			cin>>x;
			if (x<=k) a.insert(x);
			
		}
		for(int i=0;i<m;++i){
			int x;
			cin>>x;
			if (x<=k) b.insert(x);
			
		}
		set<int> a1;
		set<int> b1;
		set<int> c;
		for(auto &x:a){
		auto it = find(b.begin(), b.end(), x);

		if (it==b.end()) a1.insert(x);
		else c.insert(x);
		}	
		for(auto &x:b){
		auto it = find(a.begin(), a.end(), x);

		if (it==a.end()) b1.insert(x);
		else c.insert(x);
		}
		// cout<<a1.size()<<endl;
		// cout<<b1.size()<<endl;
		// cout<<c.size()<<endl;
		// for(auto &x:a1) {cout<<x<<endl;}
		// for(auto &x:b1) {cout<<x<<endl;}
		if(a1.size()>k/2 || b1.size()>k/2){
			cout<<"NO"<<endl;
		}
		else{
			if (c.size()==k-a1.size()-b1.size()){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
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