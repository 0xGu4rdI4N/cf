#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
using ll=long long int;




void solve(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int a=n;
	int b=n;
	int c=n;
	int d=n;
	int e=0;
	for(int i=0;i<s.size();++i){
		if(s[i]=='A' && a>0){
			e++;
			a--;
		}
		if(s[i]=='B' && b>0){
			e++;
			b--;
		}
		if(s[i]=='C' && c>0){
			e++;
			c--;
		}
		if(s[i]=='D' && d>0){
			e++;
			d--;
		}
	}
	cout<<e<<endl;
	}



int main(){
	int t;
	cin>>t;
	while (t--){
		solve();
	}
	
}