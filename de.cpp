#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;

// int T[27];

void solve(){
	int S[27]={0};
	string s,t,a;
	cin>>s>>t;
	// cout<<s<<' '<<t<<endl;
	int k;
	// k=int(s[0])-64;
	// cout<<k<<endl;
	for (int i=0;i<s.length();i++){
		k=int(s[i])-64;

		S[k]=S[k]+1;
	}
	for (int i=0;i<t.length();i++){
		k=int(t[i])-64;

		S[k]=S[k]-1;
	}
	for (int i=1;i<27;i++){
		// cout<<S[i]<<' ';
		if (S[i]<0){
			cout<<"NO"<<endl;
			return;
		}
	}
	// cout<<'endl';
	for(int i=0;i<s.length();i++){
		int b=int(s[i])-64;
		int c=S[b];
		if (c==0){
			a+=s[i];
		}
		else{
			S[b	]=S[b]-1;
		}
	}
	if (a==t){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}

}

int main(){
	int t;
	cin>>t;	
	while (t--){
		solve();	
	}

}