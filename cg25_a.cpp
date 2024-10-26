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
		if (s[i]=='1'){++a;}
	}

	if (a%2!=0){
		cout<<"NO"<<endl;
	}
	else{
		if (a==2){
			int b=0;
	for (int i=0;i<s.length();++i){
		if (s[i]=='1' && s[i+1]=='1'){b=1;}
	}
	if (b==1){
					cout<<"NO"<<endl;

	}
	else{
		cout<<"YES"<<endl;
	}
		}
		else{
		cout<<"YES"<<endl;
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