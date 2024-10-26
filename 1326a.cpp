#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;


void solve(){
	int n;
	cin>>n;
	if (n==1){
		cout<<-1<<endl;
	}
	else{
		string s="2";
		int d=n-1;
		while (d--){
			s+="3";
		}
		cout<<s<<endl;
	}

}
	




int main(){
	int t;
	cin>>t;
	while (t--){
		solve();
	}

}