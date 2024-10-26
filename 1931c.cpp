#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;


void solve(){
	int n;
	cin>>n;
	vector<int>v;
	for (int i=0;i<n;++i){
		int a;
		cin>>a;
		v.push_back(a);
	}
	int f=0;
	int b=n-1;
	for (int i=0;i<n-1;++i){
		if (v[i]==v[i+1]){f++;}
		else{break;}
	}
	// cout<<f<<endl;
	for (int i=n-1;i>0;--i){
		if (v[i]==v[i-1]){b--;}
		else{break;}
	}
	// cout<<b<<endl;
	if (b<=f){cout<<0<<endl;}
	else {
		if (v[b]==v[f]){
			cout<<b-f-1<<endl;
		}
		else{
			if (f+1>n-b){
				cout<<n-f-1<<endl;
			}
			else{
				cout<<b<<endl;
			}
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