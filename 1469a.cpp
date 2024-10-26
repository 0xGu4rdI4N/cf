#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;


void solve(){
	string s;
	cin>>s;
	if(s.size()%2==0 && s[0]!=')' && s[s.size()-1]!='(')cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
}
	




int main(){
	int t;
	cin>>t;
	while (t--){
		solve();
	}
}