#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;


void solve(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int a=0;
	for (int i=0;i<s.length();++i){
		if (s[i]=='m' && s[i+1]=='a' && s[i+2]=='p'){
			i+=2;
			++a;
		}
		else if (s[i]=='p' && s[i+1]=='i' && s[i+2]=='e'){
			i+=2;
			++a;
	}

}
	cout<<a<<endl;
}


	




int main(){
	int t;
	cin>>t;
	while (t--){
		solve();
	}	
}