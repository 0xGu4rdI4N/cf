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
		int n,k;
		cin>>n>>k;
		int a[n];
		for (int i=0;i<n;++i){
			cin>>a[i];
		}
		int max=0;
		for (int i=0;i<n;++i){
			if (a[i]>max && k%a[i]==0){max=a[i];}
		}
		cout<<k/max<<endl;
	}