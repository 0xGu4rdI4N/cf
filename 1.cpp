#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
using ll=long long int;
#define MAXN 1000001
#define MOD 1000000007

ll dp[MAXN];


void solve(){
	int n,k;
	cin>>n>>k;
	vector<int>a(n);
	for(auto &x:a){
		cin>>x;
	}
	ll s=1;
	ll m=0;
	sort(a.begin(),a.end());
	// cout<<a[0]<<endl;
	int c=1;
	for(int i=0;i<n-1;++i){
		if(a[i+1]-a[i]==0 && c<=k){
			// cout<<a[i+1]-a[i]<<endl;
			s++;
			m=max(m,s);
			// cout<<s<<endl;
		}
		else if(a[i+1]-a[i]==1){
			c++;
			if(c<=k){
			s++;
			c++;
			m=max(m,s);
		}
		else{
			m=max(s,m);
			c=1;
			s=1;
			// cout<<s<<endl;
		}
		}
		else{
			// cout<<s<<endl;
			m=max(s,m);
			c=1;
			s=1;
		}
		
	}
	cout<<m<<endl;
}



int main(){
	int t;
	cin>>t;
	while (t--){
		solve();
	}
		
}